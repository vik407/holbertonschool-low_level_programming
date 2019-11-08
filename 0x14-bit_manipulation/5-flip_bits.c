#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: long int
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap = n ^ m;
	int counter = 0;

	while (swap)
	{
		swap = swap & (swap - 1);
		counter++;
	}

	return (counter);
}
