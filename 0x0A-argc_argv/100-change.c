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

int main(int argc, char *argv[])
{
	int cent = 0, coin = 0;

	if (argc == 2)
	{
		cent = atoi(argv[1]);
		while (cent >= 25)
		{
			cent -= 25;
			coin++;
		}
		while (cent >= 10)
		{
			cent -= 10;
			coin++;
		}
		while (cent >= 5)
		{
			cent -= 5;
			coin++;
		}
		while (cent >= 2)
		{
			cent -= 2;
			coin++;
		}
		while (cent >= 1)
		{
			cent -= 1;
			coin++;
		}
		printf("%d\n", coin);
		return (0);
	}
	printf("Error\n");
	return (1);
}
