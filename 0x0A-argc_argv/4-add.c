#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return values accordingly
 */

int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
		if (argv[a][b] < '0' || argv[a][b] > '9')
		{
		printf("Error\n");
	return (1);
		}
		}
	c += atoi(argv[a]);
	}
printf("%d\n", c);
return (0);
}
