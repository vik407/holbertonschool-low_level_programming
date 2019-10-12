#include "holberton.h"

/**
 * _atoi - turns a string into an integer
 * @s: string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int index, neg_counter, num;

	index = 0;
	neg_counter = 0;

	while (!(s[index] >= '0' && s[index] <= '9') && s[index] != '\0')
	{
		if (s[index] == '-')
			neg_counter++;

		index++;
	}

	num = 0;

	while (s[index] >= '0' && s[index] <= '9')
	{
		num = (s[index] - '0') + (num * 10);
		index++;
	}

	if (neg_counter % 2 != 0)
		num = -num;

	return (num);
}
