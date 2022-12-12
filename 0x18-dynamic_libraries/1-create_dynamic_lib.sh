#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pendatic *.c shared -o libdynamic.so
