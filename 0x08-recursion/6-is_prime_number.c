#include "holberton.h"
int _math(int n, int mod);

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * @n: Number
 * Return: 1 for prime, 0 if not prime.
**/

int is_prime_number(int n)
{
	return (_math(n, 2));
}

/**
 * _math - function that do the math for is_prime_number
 * @n: Number
 * @i: do the evaluation of the number
 * Return: 1 for prime, 0 if not prime
**/

int _math(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0 || n < 2)
		return (0);
	return (_math(n, i + 1));
}
