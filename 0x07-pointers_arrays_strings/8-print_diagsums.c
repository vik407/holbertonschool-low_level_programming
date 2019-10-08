#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: the matrix
 * @size: size of the matrix
 * Return: integers.
 **/

void print_diagsums(int *a, int size)
{
	int i_sum = 0, j_sum = 0, i = 0, j = 1;

	while (i < size)
	{
		i_sum += a[(size + 1) * i];
		i++;
	}

	while (j <= size)
	{
		j_sum += a[(size - 1) * j];
		j++;
	}

	printf("%i, %i\n", i_sum, j_sum);
}
