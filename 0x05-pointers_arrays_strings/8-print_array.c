#include <stdio.h>
#include "main.h"

/**
 * print_array - main function
 * @a: Pointer, the array to print
 * @n: The array lenght
 * Description: This function prints elements of an array of integers
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
