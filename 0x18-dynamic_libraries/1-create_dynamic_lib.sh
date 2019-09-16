#!/bin/bash
gcc gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
