#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: The number of arguments
 * @argv: Any containig arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
