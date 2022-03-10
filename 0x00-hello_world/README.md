#!/bin/bash
1. Write a script that runs a C file through the preprocessor and save the result into another file.
gcc -E $CFILE -o c
2. Write a script that compiles a C file but does not link.
gcc $CFILE -c
3. Write a script that generates the assembly code of a C code and save it in an output file.
gcc -S $CFILE
4. Write a script that compiles a C file and creates an executable named cisfun
gcc $CFILE -o cisfun
5. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
#include <stdio.h>



/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */



int main(void)

{

	puts("\"Programming is like building a multilingual puzzle");

	return (0);

}
