#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int length, second_half;

	for (length = 0; *(str + length) != '\0'; length++)
	{
	}

	if (length % 2 == 0)
		second_half = (length / 2);

	else
		second_half = (length - ((length - 1) / 2));

	while (second_half < length)
	{
		_putchar(*(str + second_half));
		second_half++;
	}

	_putchar('\n');
}
