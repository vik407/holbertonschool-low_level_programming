#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary resber to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted resber, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0, val, pow = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
		i++;
	i = i - 1;

	while (i >= 0)
	{
		val = b[i];
		if (val == 48)
		{
			pow++;
			i--;
		} else if (val == 49)
		{
			res = res + (1 << pow);
			pow++;
			i--;
		} else
		{
			return (0);
		}
	}
	return (res);
}
