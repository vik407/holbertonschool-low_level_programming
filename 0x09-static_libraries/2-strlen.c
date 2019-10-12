#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: The String
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
