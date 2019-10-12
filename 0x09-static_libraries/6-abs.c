#include "holberton.h"
/**
 * _abs - Entry point to receive chars
 * @n: Number to check
 *
 * Description: Prints the sign of a number.
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * ((2 * n + 1) % 2);
		return (n);
	}
}
