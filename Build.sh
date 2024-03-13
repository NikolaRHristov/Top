#!/bin/bash

Build="Build"

rm -rf $Build
mkdir -p $Build
cd $Build || exit
cmake .. -DAMDGPU_SUPPORT=ON
make
