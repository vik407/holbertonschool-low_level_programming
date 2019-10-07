#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: Pointer to b
 * @b: Constant byte
 * @n: Number of bytes
 * Return: constant byte.
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
	{
		s[i] = b;
	}
	return (s);
}
