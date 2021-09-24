#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o libdynamic.so *.o -lc