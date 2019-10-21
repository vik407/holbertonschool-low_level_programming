#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - this function copies the src to dest.
 * @dest: String Destination
 * @src: String Source
 * @length: String lenght
 *
 * Return: The source copyed to the destination
 */

char *_strcpy(char *dest, char *src, int length)
{
	int k9;

	for (k9 = 0; k9 < length; k9++)
		dest[k9] = src[k9];

	return (dest);
}

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
	dog_t *dog;
	int i, j;
/*	Store a copy of @name and @owner */
	char *name_cpy, *owner_cpy;

	dog = (malloc(sizeof(dog_t)));

	if (name != NULL || age <= 0 || owner != NULL || dog == NULL)
		return (NULL);
/*	The lenght of name_cpy */
	i = 0;
	while (name[i] != '\0')
			i++;
/*	The lenght of owner_cpy */
	j = 0;
	while (owner[j] != '\0')
			j++;
/*	Mallocs starts */
	name_cpy = (malloc(sizeof(char) * (i + 1)));
	owner_cpy = (malloc(sizeof(char) * (j + 1)));
/*	if mallocs fails free the dog and return NULL */
	if (name_cpy == NULL)
		free(dog);
		return (NULL);
/*	if owner malloc fails free name_cpy, the dog and return NULL */
	if (owner_cpy == NULL)
		free(name_cpy);
		free(dog);
		return (NULL);
/*	Ready to copy */
	name_cpy = _strcpy(name_cpy, name, (i + 1));
	owner_cpy = _strcpy(name_cpy, owner, (j + 1));
/*	Who let the dogs out! */
	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;
/*	Woof! */
	return (dog);
}
