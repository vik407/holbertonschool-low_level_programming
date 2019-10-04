#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array
 * @n: Numer of elements on the array
 * Return: a comparation
 */

void reverse_array(int *a, int n)
{
	int i, p;

	p = 0;
	n--;

	for (i = 0; i < n; i++)
	{
		p = a[n];
		a[n] = a[i];
		a[i] = p;
		n--;
	}
}
