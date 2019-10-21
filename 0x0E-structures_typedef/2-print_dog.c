#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: dog struct
 *
 * Result: If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* Name - - - - - */
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		/* Age - - - - - */
		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		/* Owner - - - - - */
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
