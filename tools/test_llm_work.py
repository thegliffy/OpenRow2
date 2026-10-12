#!/usr/bin/env python3
"""Checker tests. Run: python3 tools/test_llm_work.py"""
import tempfile
import unittest
from pathlib import Path

import llm_work


class Checker(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.functions, cls.strings, cls.plt, cls.ambiguous = llm_work.load()
        cls.owners, cls.per_fn = llm_work.index_signatures(cls.strings)
        cls.entry = llm_work.candidates(
            cls.functions, cls.owners, cls.per_fn, set(), batched=set()
        )[0]
        cls.sig = llm_work.unique_signature(cls.entry, cls.owners, cls.per_fn)
        cls.evidence = cls.per_fn[cls.entry][cls.sig][0]

    def row(self, **over):
        base = {
            "entry": self.entry,
            "current_name": self.functions[self.entry],
            "proposed_name": self.sig,
            "kind": "assert_signature",
            "evidence": self.evidence,
        }
        base.update(over)
        return base

    def test_accepted_name_leaves_the_queue(self):
        queue = llm_work.candidates(self.functions, self.owners, self.per_fn, set())
        self.assertNotIn("04030340", queue)

    def test_queue_is_unnamed_functions(self):
        queue = llm_work.candidates(
            self.functions, self.owners, self.per_fn, set(), batched=set()
        )
        self.assertGreaterEqual(len(queue), 5)
        self.assertTrue(all(self.functions[e].startswith("FUN_") for e in queue))

    def test_pass_on_the_unshared_signature(self):
        verdict, reason = llm_work.check_row(
            self.row(), self.functions, self.strings, self.ambiguous,
            self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "pass", reason)
        self.assertEqual(reason, self.sig)

    def test_reject_a_different_name(self):
        verdict, reason = llm_work.check_row(
            self.row(proposed_name="Other::Method"),
            self.functions, self.strings, self.ambiguous, self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "reject")
        self.assertIn(self.sig, reason)

    def test_reject_evidence_that_is_not_the_message(self):
        verdict, _ = llm_work.check_row(
            self.row(evidence="strings until the next path"),
            self.functions, self.strings, self.ambiguous, self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "reject")

    def test_reject_replacing_a_signature_name(self):
        verdict, reason = llm_work.check_row(
            {
                "entry": "0402e220",
                "current_name": "eON_MapOfBits::FindSetRange",
                "proposed_name": "eON_MapOfBits::IsRangeSet",
                "kind": "assert_signature",
                "evidence": "eON_MapOfBits::IsRangeSet",
            },
            self.functions, self.strings, self.ambiguous, self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "reject")
        self.assertTrue("more than one" in reason or "already carries" in reason)

    def test_reject_ambiguous_function(self):
        verdict, reason = llm_work.check_row(
            {
                "entry": "04017fd0",
                "current_name": "readSymbolicLink",
                "proposed_name": "eON_FileSystem::init",
                "kind": "assert_signature",
                "evidence": "eON_FileSystem::init",
            },
            self.functions, self.strings, self.ambiguous, self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "reject")
        self.assertIn("more than one", reason)

    def test_hold_hand_read(self):
        verdict, _ = llm_work.check_row(
            self.row(kind="hand_read"),
            self.functions, self.strings, self.ambiguous, self.owners, self.per_fn,
        )
        self.assertEqual(verdict, "hold")

    def test_packet_hides_the_answer(self):
        text = llm_work.render_packet(
            self.entry, self.functions, self.strings, self.plt,
            self.ambiguous, self.owners, self.per_fn,
        )
        self.assertIn(self.evidence, text)
        self.assertIn("Reply SKIP", text)
        self.assertNotIn(f"proposed_name must be {self.sig}", text)

    def test_parse_reply_uses_reasoning_when_content_is_empty(self):
        row = llm_work.parse_reply({
            "content": None,
            "reasoning_content": "thinking\n04030340\tFUN_04030340\tIUnknownImp::QueryInterface\tassert_signature\tevidence",
        })
        self.assertEqual(row["proposed_name"], "IUnknownImp::QueryInterface")

    def test_accept_appends_one_batch_line(self):
        with tempfile.TemporaryDirectory() as tmp:
            src = Path(tmp) / "proposal.tsv"
            batch = Path(tmp) / "names_batch_llm.tsv"
            done = Path(tmp) / "done.tsv"
            with open(src, "w") as f:
                f.write("entry\tcurrent_name\tproposed_name\tkind\tevidence\n")
                f.write("\t".join([
                    self.entry, self.functions[self.entry], self.sig,
                    "assert_signature", self.evidence,
                ]) + "\n")
            results = llm_work.accept_file(
                src, self.functions, self.strings, self.ambiguous,
                self.owners, self.per_fn, batch=batch, done=done,
            )
            self.assertEqual(results[0][0], "pass")
            self.assertEqual(
                batch.read_text(),
                f"{self.functions[self.entry]}\t{self.sig}\n",
            )


if __name__ == "__main__":
    unittest.main()
