#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments passed
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
