#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: input string
 * Return: 1337 string
 */

char *leet(char *s)
{
	int i, j;
	char r[] = "aAeEoOtTlL";
	char l[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (s[i] == r[j])
			{
				s[i] = l[j / 2];
			}
		}
	}

	return (s);
}
