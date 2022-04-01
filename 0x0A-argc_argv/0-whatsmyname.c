#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for program
 * @argc: count of args present
 * @argv: array of char * pointing to args
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
