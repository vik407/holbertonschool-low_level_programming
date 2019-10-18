#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: String one
 * @s2: String two
 * @n: N bytes of string 2 terminated in null
 *
 * Return: Returns a pointer to the allocated memory
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;/* Response */
	unsigned int lenS1, lenS2, a, b;/* Lengths and indexes */

	lenS1 = 0, lenS2 = 0, a = 0;
	if (s1)
	{
		while (s1[a++])
			lenS1++;
	}

	a = 0;
	if (s2)
	{
		while (s2[a++])
			lenS2++;
	}

	if (lenS2 > n)
		lenS2 = n;

	res = malloc(sizeof(char) * (lenS1 + lenS2 + 1));

	if (!res)
		return (NULL);

	for (a = 0; a < lenS1; a++)
		res[a] = s1[a];

	for (b = 0; b < lenS2; b++, a++)
		res[a] = s2[b];

	res[a] = '\0';
	return (res);
}
