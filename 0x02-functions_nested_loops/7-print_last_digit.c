#include "holberton.h"
/**
 * print_last_digit - Entry point to receive integers.
 * @n: The integer
 *
 * Description: Returns the value of the last digit.
 * Return: 1
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l <  0)
	{
		l = l * (-1);
	}
	_putchar(l + '0');
	return (l);
}
