#include "holberton.h"
/**
 * print_last_digit - Entry point to receive integers.
 * @n: The integer
 *
 * Description: prints the last digit of a number..
 * Return: 0
 */
int print_last_digit(int n)
{
	int l, c;

	l = n % 10;

	if (l <  0)
	{
		l = -l;
		c = '0' + l;
		_putchar(c);
	}

	return (l);
}
