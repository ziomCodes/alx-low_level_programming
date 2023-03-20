#!/bin/bash
wget -P /tmp https://github.com/ziomCodes/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-mailo.so
export LD_PRELOAD=/tmp/101-mailo.so
