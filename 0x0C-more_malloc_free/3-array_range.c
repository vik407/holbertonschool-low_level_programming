#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: Integer
 * @max: Integer
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 **/
int *array_range(int min, int max)
{
	int *res, length, i = 0, num = min;

	if (min > max)
		return (NULL);

	length  = (max - min) + 1;

	res = malloc(length * sizeof(int));

	if (res == NULL)
		return (NULL);

	while (num <= max)
	{
		res[i] = num;
		i++;
		num++;
	}

	return (res);
}
