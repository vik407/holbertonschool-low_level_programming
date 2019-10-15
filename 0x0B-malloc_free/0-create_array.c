#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character it is initialized with
 *
 * Return: NULL if size = 0 - a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	res = malloc((sizeof(char)) * size);

	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	if (res == NULL)
		return (NULL);

	return (res);
}
