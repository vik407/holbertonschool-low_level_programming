#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
