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
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
