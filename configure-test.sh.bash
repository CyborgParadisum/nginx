#!/bin/bash

current=$(dirname "$0")
test_prefix=$current/test
./configure \
--prefix="$test_prefix"/usr/local/nginx
