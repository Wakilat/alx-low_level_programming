#include <stdio.h>

/**
 * main - Lanzador
 *
 * Return: Always return (0)
 */

int main(void)
{
	int huns = 48;
	int tens = 48;
	int ones = 48;

	while (tens < 58)
	{
		huns = 48;
		while (huns < 58)
		{
			ones = 48;
			while (ones < 58)
			{
				if (tens != huns && tens != ones && huns != ones && tens < huns && huns < ones)
				{
					putchar(tens);
					putchar(huns);
					putchar(ones);
					if (huns == 56 && tens == 55 && ones == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				ones++;
			}
			huns++;
		}
		tens++;
	}
	putchar('\n');
	return (0);
}
