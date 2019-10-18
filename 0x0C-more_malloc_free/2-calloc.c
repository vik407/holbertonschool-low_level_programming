#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: String one
 * @size: String two
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i = 0;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = (nmemb * size);

	res = malloc(total);

	if (res == NULL)
		return (NULL);

	while (i < total)
	{
		res[i] = 0;
		i++;
	}

	return (res);
}
