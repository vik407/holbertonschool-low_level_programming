#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @key: is the key. key can not be an empty string
 * @ht: Hash table
 * @value:  is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	/* Add element (add_dnode), null if not posible*/
	if ((add_dnode(&ht->array[idx], key, value)) == NULL)
		return (0);

	return (1);
}
/**
 * add_dnode - Write a function that adds a new node at the beginning
 * of a hash_node_t list.
 * @head: The head of the list
 * @key: key
 * @value: value
 * Return: A pointer to the new node
 */
hash_node_t *add_dnode(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = NULL, *_head = *head;

	while (_head)
	{
		/*Validate keys*/
		if (strcmp(_head->key, key) == 0)
		{
			free(_head->value);
			_head->value = strdup(value);
			return (*head);
		}
		_head = _head->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = *head;
	*head = node;

	return (*head);
}
