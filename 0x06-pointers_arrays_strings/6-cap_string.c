#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s: input string
 * Return: input capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char ws[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	while (s[i] != '\0')
	{
		for (j = 0; ws[j] != '\0'; j++)
		{
			if (s[i - 1] == ws[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= ('a' - 'A');
			}
		}
		i++;
	}

	return (s);
}
