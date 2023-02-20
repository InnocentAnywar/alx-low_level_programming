#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int l;

	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and ", n, l);
		printf("is greater than 5\n");
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and ", n, l);
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
