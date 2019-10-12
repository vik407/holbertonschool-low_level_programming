#include "holberton.h"

/**
 * _strncat - function that concatenates n bytes of string  two strings.
 *
 * @dest: The destination string to append n
 * @src: The string to append
 * @n: bytes to pass
 * Return: concatenated n bytes to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d_count = 0, s_count = 0;

	while (dest[d_count] != '\0')
	{
		d_count++;
	}

	while (s_count < n && src[s_count] != '\0')
	{
		*(dest + d_count) = *(src + s_count);
		d_count++;
		s_count++;
	}

	return (dest);
}
