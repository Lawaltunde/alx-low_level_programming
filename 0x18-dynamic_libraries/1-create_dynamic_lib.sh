#!/bin/bash
gcc -c *.c -FPIC
gcc -shared -o liball.so *.o
