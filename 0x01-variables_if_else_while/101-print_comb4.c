#include <stdio.h>

/**
 * main - Lanzador
 *
 * Return: Always return (0)
 */

int main(void)
{
	int huns;
	int tens;
	int ones;

	for (huns = 0; huns <= 9; huns++)
	{
		for (tens = huns + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			 {
				 putchar(huns + '0');
				 putchar(tens + '0');
				 putchar(ones + '0');

				 if (huns < 8)
				 {
					 putchar(',');
					 putchar(' ');
				 }
			 }
		}
	}
	putchar('\n');
	return (0);
}
