#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL. On success, the _strdup function returns a
 * pointer to the duplicated string. It returns NULL if insufficient memory was
 * available
 */

char *_strdup(char *str)
{
	char *res;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	len++;

	res = malloc(len * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		res[i] = str[i];

	return (res);
}
