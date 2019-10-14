#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: The number of arguments
 * @argv: Any containig arguments
 *
 * Return: Is not exactly 1, print Error, followed by a new line,
 * and return 1. If the number passed as the argument is negative, print 0,
 * followed by a new line.
 */

int main(int argc, char **argv)
{
	int value, count;

	count = 0;
	value = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (value % 25 >= 0)
	{
		count += value / 25;
		value = value % 25;
	}

	if (value % 10 >= 0)
	{
		count += value / 10;
		value = value % 10;
	}

	if (value % 5 >= 0)
	{
		count += value / 5;
		value = value % 5;
	}

	if (value % 2 >= 0)
	{
		count += value / 2;
		value = value % 2;
	}

	if (value % 1 >= 0)
	{
		count += value / 1;
	}

	printf("%d\n", count);
	return (0);
}
