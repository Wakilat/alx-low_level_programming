#include "main.h"

/**
 * flip_bits - gets number of bits needed to flip for n to equal m
 * @n: number to see how many bit flips are needed to equal m for
 * @m: number to set other to equal given bit flips
 *
 * Return: number of bit flips needed for one number to equal the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
