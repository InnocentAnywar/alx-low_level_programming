#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments supplied
 * @argv: an array of pointers to the arg
 * Return: always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
