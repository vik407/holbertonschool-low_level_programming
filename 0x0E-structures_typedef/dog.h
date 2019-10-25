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
void print_dog(struct dog *d);
/*
 * 3. Outside of a dog, a book is a man's best friend.
 * Inside of a dog it's too dark to read
 * Define a new type dog_t as a new name for the type struct dog.
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
