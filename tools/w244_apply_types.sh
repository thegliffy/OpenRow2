#!/bin/bash
# Wave 244: apply return types + verbatim source prototypes (zlib v1.2.3.4) via MCP.
set -u
M=/home/gliffy/.hermes/bin/mcp-use
SRC='source (zlib v1.2.3.4)'
apply() { # addr type comment
  echo "--- $1 : type=$2"
  if [ -n "$2" ]; then
    $M openrow2 set_return_type "target=$1" "typename=$2"
  fi
  $M openrow2 set_comment "target=$1" "comment=$SRC $3"
}
# copy A (04007xxx)
apply 040070f0 /int  'ZEXTERN int ZEXPORT deflateInit2_ OF((z_streamp strm, int  level, int  method, int windowBits, int memLevel, int strategy, const char *version, int stream_size));'
apply 04007690 /int  'ZEXTERN int ZEXPORT deflate OF((z_streamp strm, int flush));'
apply 04007980 /int  'ZEXTERN int ZEXPORT deflateEnd OF((z_streamp strm));'
apply 04007b90 /ulong 'ZEXTERN uLong ZEXPORT crc32   OF((uLong crc, const Bytef *buf, uInt len));'
apply 04007c80 /int  'ZEXTERN int ZEXPORT inflate OF((z_streamp strm, int flush));'
apply 04007e00 /int  'ZEXTERN int ZEXPORT inflateInit_ OF((z_streamp strm, const char *version, int stream_size));'
apply 040080d0 /int  'ZEXTERN int ZEXPORT inflateEnd OF((z_streamp strm));'
apply 04008630 /int  'ZEXTERN int ZEXPORT inflateReset OF((z_streamp strm));'
apply 04008650 /int  'ZEXTERN int ZEXPORT deflateReset OF((z_streamp strm));'
apply 04008e60 /ulong 'ZEXTERN uLong ZEXPORT adler32 OF((uLong adler, const Bytef *buf, uInt len));'
# copy B (04526xxx)
apply 04526058 /int  'ZEXTERN int ZEXPORT deflateInit2_ OF((z_streamp strm, int  level, int  method, int windowBits, int memLevel, int strategy, const char *version, int stream_size));'
apply 045261c0 /int  'ZEXTERN int ZEXPORT deflate OF((z_streamp strm, int flush));'
apply 0452627c /int  'ZEXTERN int ZEXPORT deflateEnd OF((z_streamp strm));'
apply 04526300 /ulong 'ZEXTERN uLong ZEXPORT crc32   OF((uLong crc, const Bytef *buf, uInt len));'
apply 0452633c /int  'ZEXTERN int ZEXPORT inflate OF((z_streamp strm, int flush));'
apply 0452639c /int  'ZEXTERN int ZEXPORT inflateInit_ OF((z_streamp strm, const char *version, int stream_size));'
apply 04526450 /int  'ZEXTERN int ZEXPORT inflateEnd OF((z_streamp strm));'
apply 045265ac /int  'ZEXTERN int ZEXPORT inflateReset OF((z_streamp strm));'
apply 045265b4 /int  'ZEXTERN int ZEXPORT deflateReset OF((z_streamp strm));'
apply 045267b8 /ulong 'ZEXTERN uLong ZEXPORT adler32 OF((uLong adler, const Bytef *buf, uInt len));'
