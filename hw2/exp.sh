#!/bin/bash
for i in 1 2 4 8 15;
do
    mpiexec -n $((i+1)) ./mtx_msr
done
