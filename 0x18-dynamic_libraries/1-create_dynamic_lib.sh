#!/bin/bash
gcc -c -fpic -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
