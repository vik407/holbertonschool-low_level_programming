#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - stores dog information
 * @name: dog name
 * @age:  dog age
 * @owner: dog's owner
 *
 */
struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
