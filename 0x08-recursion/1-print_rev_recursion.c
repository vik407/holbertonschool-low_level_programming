#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String
 * Return: the string in reverse
**/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}