#!/bin/bash
d
git clone https://github.com/ebadi/esmini.git
mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Debug
cmake --build . --config Debug --target install
cd ../


