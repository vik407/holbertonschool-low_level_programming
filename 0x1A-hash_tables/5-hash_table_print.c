#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * Return: a printed (printf) list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *list;
	int oddeven = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		list = ht->array[i];
		while (list)
		{
			if (oddeven == 1)
				printf(", ");
			printf("'%s': '%s'", list->key, list->value);
			oddeven = 1;
			list = list->next;
		}
		i++;
	}
	printf("}\n");
}
