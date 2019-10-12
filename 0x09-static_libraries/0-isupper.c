#include "holberton.h"

/**
 * _isupper - Check if the character is Uppercase
 * @c: The character to check
 *
 * Return: if is upper return 1.
 * On false 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
