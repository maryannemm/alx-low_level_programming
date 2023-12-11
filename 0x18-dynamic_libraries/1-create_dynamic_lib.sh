#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: remove object files
rm *.o

