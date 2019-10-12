#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: The number of arguments
 * @argv: Any containig arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0' && argc > 0; i++)
		printf("%s\n", argv[i]);

	return (0);
}
