#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
	unsigned long int _n = n;
	int i = 0, k;

	if (n == 0)
		_putchar('0');

	while (_n > 0)
	{
		_n = _n >> 1;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}

}
