#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printf_chr - print char
 * @any: arguments
 * @separator: separator
 * Return: nothing
 */

void printf_chr(va_list any, char *separator)
{
	printf("%s%c", separator, va_arg(any, int));
}

/**
 * printf_int - print integer
 * @any: arguments
 * @separator: separator
 * Return: nothing
 */

void printf_int(va_list any, char *separator)
{
	printf("%s%d", separator, va_arg(any, int));
}

/**
 * printf_str - print string
 * @any: arguments
 * @separator: separator
 * Return: nothing
 */

void printf_str(va_list any, char *separator)
{
	/* Use a char var */
	char *s;

	s = va_arg(any, char *);
	/* s: char * (if the string is NULL, print (nil) instead */
	if (!s)
	{
		s = "(nil)";
	}

	printf("%s%s", separator, s);
}

/**
 * printf_flo - print floats
 * @any: arguments
 * @separator: separator
 * Return: nothing
 */

void printf_flo(va_list any, char *separator)
{
	printf("%s%f", separator, va_arg(any, double));
}

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: Print a new line at the end of your function
 */

void print_all(const char * const format, ...)
{
	va_list any;
	int i, j;
	char *separator;
	a_for ops[] = {
		{"c", printf_chr},
		{"i", printf_int},
		{"s", printf_str},
		{"f", printf_flo},
		{NULL, NULL}
	};

	va_start(any, format);

	i = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == *(ops[j]).any_format)
			{
				ops[j].p(any, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	/* Print a new line at the end of your function */
	printf("\n");
	va_end(any);
}
