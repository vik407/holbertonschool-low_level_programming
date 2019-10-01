#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed.
 * Return: _
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i = i + 1;
	}
		_putchar('\n');
}
