#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0, followed by a new line using putchar
 *
 * Return: returns (0)
 */

int main(void)
{
	int digits;
	for (digits = 0; digits < 10; digits++)
		putchar(digits);
	        putchar('\n')
	return (0);
}
