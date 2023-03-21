#!/bin/bash
gcc -Wall -Wextra -Werror -pendatic -c -FPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
