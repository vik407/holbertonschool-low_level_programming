#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: parameters, number of parameters
 *
 * Return: sum parameters, if num parameters is n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list args;
	/* If n == 0 return (0) */
	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);
	return (sum);
}
