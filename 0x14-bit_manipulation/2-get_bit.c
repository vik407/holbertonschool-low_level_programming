#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int _n = n;
	unsigned int i = 0;

	if (index >= sizeof(n) * 8)
		return (-1);

	if (n == 0 && index == 0)
		return (0);

	while (_n > 0)
	{
		_n = _n >> 1;
		i++;
	}

	if (index > i - 1)
		return (0);

	n = n >> index;

	if (n & 1)
	{
		return (1);
	}

	if (n & 0)
	{
		return (0);
	}

	return (0);
}
