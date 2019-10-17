#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 *
 * @b: integer
 *
 * Return: Returns a pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *allocated;/* The value to output */

	allocated = malloc(b);/* Allocate the incoming value */

	if (allocated == NULL)
		exit(98);/* If no value are incoming terminate with 98 */
	else
		return (allocated);/* Return the allocated value */
}
