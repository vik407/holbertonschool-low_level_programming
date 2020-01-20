#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL, *_head = NULL;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		head = ht->array[i];

		while (head)
		{
			_head = head;
			head = head->next;
			free(_head->key);
			free(_head->value);
			free(_head);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
