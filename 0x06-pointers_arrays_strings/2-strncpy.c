#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: The destination string
 * @src: The string to copy
 * @n: bytes to pass
 * Return: a string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
