#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line
 *
 * Result: returns (0) after executing
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	        putchar('\n');
	return (0);
}