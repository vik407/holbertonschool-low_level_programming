#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 *
 * @argc: The number of arguments
 * @argv: Any containig arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
}
