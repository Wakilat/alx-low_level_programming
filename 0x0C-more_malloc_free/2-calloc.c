#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, and inits
 * @nmemb: number of members in array
 * @size: size of each member
 *
 * Return: void pointer to beginning of alloc/init'ed memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
