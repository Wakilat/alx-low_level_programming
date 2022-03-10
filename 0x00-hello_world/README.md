#!/bin/bash
1. Write a script that runs a C file through the preprocessor and save the result into another file.
gcc -E $CFILE -o c
2. Write a script that compiles a C file but does not link.
gcc $CFILE -c
3. Write a script that generates the assembly code of a C code and save it in an output file.
gcc -S $CFILE
