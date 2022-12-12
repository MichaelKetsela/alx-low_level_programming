#!/bin/bash
gcc -Wall -fPIC -c *.c && -shared -o liball.so *.o
