#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Return NULL if the function fails.
 * You have to store a copy of name and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogn;
	int ai, je, ki;
	char *n, *o;

	dogn = malloc(sizeof(struct dog));
	if (dogn == NULL)
		return (NULL);

	for (ai = 0; name[ai] != '\0'; ai++)
		;
	for (je = 0; owner[je] != '\0'; je++)
		;

	n = malloc(sizeof(char) * ai + 1);
	if (n == NULL)
	{
		free(dogn);
		return (NULL);
	}
	o = malloc(sizeof(char) * je + 1);
	if (o == NULL)
	{
		free(n);
		free(dogn);
		return (NULL);
	}
	for (ki = 0; ki <= ai; ki++)
		n[ki] = name[ki];
	for (ki = 0; ki <= je; ki++)
		o[ki] = owner[ki];

	dogn->name = n;
	dogn->age = age;
	dogn->owner = o;

	return (dogn);
}
