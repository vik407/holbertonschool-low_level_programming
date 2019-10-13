#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 *
 * @argc: The number of arguments
 * @argv: Any containig arguments
 *
 * Return: If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int j, res = 0, i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argc > i)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);

}
