#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: structure
 *
 * Return: free dogs!.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Who let this dogs out! */
		free(d->name);
		free(d->owner);
		/* And this other floating dog! */
		free(d);
	}
}
