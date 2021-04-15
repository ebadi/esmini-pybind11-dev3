#!/bin/bash


mkdir build
cd build
cmake ../ -DUSE_OSG=true -DCMAKE_BUILD_TYPE=Debug
cmake --build . --config Debug --target install
cd ../


