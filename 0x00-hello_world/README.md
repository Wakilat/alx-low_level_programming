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
6. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
#include <stdio.h>







/**

 * main - prints a sentence with the printf function

 *

 * Return: returns 0 after printing

 */



int main(void)



{



		printf("with proper grammar, but the outcome is a piece of art,\n");



			return (0);



}
7. Write a C program that prints the size of various types on the computer it is compiled and run on.
#include <stdio.h>







/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */



int main(void)

{

	int a;

	long int b;

	long long int c;

	char d;

	float f;



	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));

	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);

}
8. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
gcc -S -masm=intel $CFILE
