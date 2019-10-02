#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: string
 * Return: half of the string
*/

void puts_half(char *str)
{
	int length, half;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = (length / 2);
	}
	else
	{
		half = (length - ((length - 1) / 2));
	}

	while (half < length)
	{
		_putchar(*(str + half));
		half++;
	}

	_putchar('\n');
}
