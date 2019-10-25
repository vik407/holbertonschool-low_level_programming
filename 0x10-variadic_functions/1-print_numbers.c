#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: the number of integers passed to the function
 * @separator: is the string to be printed between numbers
 *
 * Return: Print a new line at the end of your function
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	char *ptr;

	/* If separator is NULL, don’t print it */
	if (separator == NULL)
	{
		separator = "";
	}

	va_start(nums, n);

	i = 0;
	while (i < n)
	{
		ptr = va_arg(nums, char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}	
		else
		{
			printf("%s", ptr);
		}

		if (i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	
	va_end(nums);
}
