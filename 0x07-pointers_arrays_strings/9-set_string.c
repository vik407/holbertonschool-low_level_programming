#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: The pointer
 * @to: The char
 * Return: char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
