#include <stdio.h>
#include <unistd.h>

/**
 * main - Print a sentence followed by a new line, to the standard error
 *
 * Return: returns (1) after printing
 */

int main(void)
{
	writef(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return(1);
