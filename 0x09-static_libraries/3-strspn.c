#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: the string
 * @accept: bytes to find
 * Return: number of bytes.
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, numbytes;

	i = 0;
	numbytes = 0;

	while (s[i] != '\0')
	{
		if (numbytes != i)
			break;

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				numbytes++;
			j++;

		}
		i++;
	}

	return (numbytes);
}
