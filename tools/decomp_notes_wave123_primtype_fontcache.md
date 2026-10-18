# Wave 123 — D3DPRIMITIVETYPE + FontCache lifecycle + Heap helpers

Scoreboard: 3,139 / 9,221.

## Named

| Addr | Name | Lock |
|------|------|------|
| 0408d720 | D3DPRIMITIVETYPE_ToString | D3DPT_* table |
| 0411b140 | FontCache::GetOrCreate | singleton |
| 0411aff0 | FontCache::FontCache | ctor |
| 0411b060 | FontCache::~FontCache | dtor |
| 0411b750 | FontCache::FindOrAddMemoryFont | dedupe add |
| 0411b1e0 | FontCache::FindFontByNameStyle | name+style |
| 0411aca0 | eON_HeapFree_ProcessHeap | thin free |
| 0411acd0 | eON_HeapAlloc_ProcessHeap | thin alloc |

## Next

More FontCache XML; Ellipse; SelectPalette.
