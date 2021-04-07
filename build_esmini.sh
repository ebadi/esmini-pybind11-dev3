#!/bin/bash

git clone https://github.com/ebadi/esmini.git
cd esmini
mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Debug
cmake --build . --config Debug --target install
cd ../
cd ../

