#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: The size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *create = NULL;

	if (size)
	{
		create = malloc(sizeof(hash_table_t));
		if(!create)
			return (NULL);

		/*Set the list*/
		create->size = size;
		create->array = NULL;

		create->array = malloc(sizeof(hash_node_t *) * size);
		if (!create->array)
			return (NULL);

		/*Initialize the array for each index NULL*/
		for (i = 0; i < size; i++)
		{
			create->array[i] = NULL;
		}
	}
	return create;
}
