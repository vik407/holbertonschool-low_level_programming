#include "holberton.h"
int _math(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: Number
 * Return: If n does not have a natural square root,
 * the function should return -1
**/

int _sqrt_recursion(int n)
{
	return (_math(n, 1));
}

/**
 * _math - function that do the math for _sqrt_recursion
 * square root of a number.
 * @n: Number
 * @i: do the comparation to n
 * Return: Square root
**/

int _math(int n, int i)
{
	if (n < 0 || n < i * i)
		return (-1);
	else if (n == i * i)
		return (i);
	return (_math(n, i + 1));
}
