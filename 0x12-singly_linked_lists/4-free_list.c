#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the list struct
 * Return: the released lists
 */
void free_list(list_t *head)
{
	list_t *value;

	while (head != NULL)
	{
		value = head;
		/* Free the str */
		free(value->str);
		/* Free the list */
		head = head->next;
		free(value);
	}
}
