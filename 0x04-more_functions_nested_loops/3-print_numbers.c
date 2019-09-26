#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - Function to print numbers
 *
 * Return: numbers 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
