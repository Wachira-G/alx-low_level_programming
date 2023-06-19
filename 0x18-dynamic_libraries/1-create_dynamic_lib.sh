#!/bin/bash

# creates a dynamic library called liball.so
# from all the .c files that are in the current directory.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
