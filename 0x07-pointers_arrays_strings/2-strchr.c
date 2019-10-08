#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: the string with the characters
 * @c: character to find
 * Return: a pointer to dest.
 **/

char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (*ptr == c)
		return (ptr);

	return (0);
}
