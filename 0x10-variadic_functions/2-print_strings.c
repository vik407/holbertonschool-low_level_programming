#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: the number of integers passed to the function
 * @separator: is the string to be printed between the strings
 *
 * Return: Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ptr;

	/* If separator is NULL, don’t print it */
	if (separator == NULL)
		separator = "";

	va_start(str, n);

	i = 0;
	while (i < n)
	{
		ptr = va_arg(str, char *);
		/* If one of the string is NULL, print (nil) instead */
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			/* If separator is NULL, don’t print it */
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}

		i++;
	}
	/* Print a new line at the end of your function */
	printf("\n");
	va_end(str);
}
