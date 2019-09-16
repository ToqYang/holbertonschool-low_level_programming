#!/bin/bash
gcc gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared *.o -o liball.so
