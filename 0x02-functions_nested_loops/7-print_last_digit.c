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
	int d = n % 10;

	if (d < 0)
	{
		d = (d * -1);
	}
	_putchar(d + '0');
	return (d);
}
