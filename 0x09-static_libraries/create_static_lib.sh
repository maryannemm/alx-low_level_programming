#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the .o files
rm *.o

