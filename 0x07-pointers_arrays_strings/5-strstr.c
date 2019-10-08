#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string to search the substring
 * @needle: the substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 **/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *str = haystack;
		char *sbstr = needle;

		while (*haystack != '\0' && *sbstr != '\0' && *haystack == *sbstr)
		{
			haystack++;
			sbstr++;
		}
		if (!*sbstr)
			return (str);
		haystack = str + 1;
	}

	return (0);
}
