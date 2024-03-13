#!/bin/bash

rm -rf Build
mkdir -p Build
cd Build
cmake .. -DAMDGPU_SUPPORT=ON
make
