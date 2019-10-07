#include "holberton.h"

/**
 * _memset - function that copies memory area.
 *
 * @dest: Memory area destination
 * @src: Memory area
 * @n: Number of bytes
 * Return: a pointer to dest.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		n--;
		i++;
		j++;
	}
	return (dest);
}
