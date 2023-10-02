#!/bin/bash

# Compile each .c file into a .o object file
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm -f *.o

