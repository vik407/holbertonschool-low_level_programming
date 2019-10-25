#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Return NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *_dog;
	int i, j, k9;
	char *name_cpy, *owner_cpy;

	_dog = malloc(sizeof(struct dog));
	if (_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;
	name_cpy = malloc(sizeof(char) * i + 1);
	if (name_cpy == NULL)
	{
		free(_dog);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * j + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(_dog);
		return (NULL);
	}
	for (k9 = 0; k9 <= i; k9++)
		name_cpy[k9] = name[k9];
	for (k9 = 0; k9 <= j; k9++)
		owner_cpy[k9] = owner[k9];
	_dog->name = name_cpy;
	_dog->age = age;
	_dog->owner = owner_cpy;
	return (_dog);
}
