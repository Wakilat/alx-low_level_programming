#include <stdio.h>

/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	argc = argc;
	printf("%s\n", *argv);
	return (0);
}
