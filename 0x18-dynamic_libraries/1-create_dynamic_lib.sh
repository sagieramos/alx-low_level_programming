#!/bin/sh
gcc -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
