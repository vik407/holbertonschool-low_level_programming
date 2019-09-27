#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - Function to print numbers
 *
 * Return: numbers 0 to 9 but no 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar('\n');
}
