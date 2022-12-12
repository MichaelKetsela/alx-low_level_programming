#!/bin/bash 
gcc -c -fPIC *.c && -shared -o liball.so *.o
