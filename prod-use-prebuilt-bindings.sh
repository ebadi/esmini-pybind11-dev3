#!/bin/bash
pip3 uninstall cmake_example -y &>/dev/null

./build_esmini.sh

pip3 install . ;
#export LD_LIBRARY_PATH=$PWD/esmini/bin:
#python3 tests/esmini.py
