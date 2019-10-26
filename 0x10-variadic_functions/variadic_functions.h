#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct any_format - structure to receive any format
 * @any_format: the specified format
 * @p: the function pointer
 */
typedef struct any_format
{
	char *any_format;
	void (*p)();
} a_for;

#endif
