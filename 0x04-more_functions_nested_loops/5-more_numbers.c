#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - Function to print numbers
 *
 * Return: 10 times the numbers from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
		for (j = 0; j <= 14; j++)
			int a = j / 10 + '0';
	                int b = j % 10 + '0';

			if (a != '0')
				_putchar(a);
			_putchar(b);
	        _putchar('\n');
}
