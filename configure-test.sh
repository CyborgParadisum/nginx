#!/bin/bash

current=$(realpath "$(dirname "$0")")
test_prefix=$current/venv/
./configure \
--prefix="$test_prefix"/usr/local/nginx \
--without-pcre \
--without-http_rewrite_module \
--without-http_gzip_module \
--with-debug \

#--with-cc-opt=" -Wno-unused-label
#                -Wno-unused-but-set-variable" \

