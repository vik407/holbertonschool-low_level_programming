#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @str: head of the linked list
 * @head: the list struct
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *value;
	list_t *value_end;
	int lenstr;

	for (lenstr = 0; str[lenstr] != '\0'; lenstr++)
		;

	/* Malloc here? */
	value = malloc(sizeof(list_t));
	value_end = *head;
	if (value == NULL)
	{
		/* if value is NULL return NULL */
		return (NULL);
		free(value);
	}

	/* Add a new node */
	value->len = lenstr;
	value->str = strdup(str);
	value->next = NULL;
	/* Use head to add node to the end */
	if (*head == NULL)
	{
		*head = value;
		return (*head);
	}
	else
	{
		while (value_end->next != 0)
		{
			value_end = value_end->next;
		}
	}
	value_end->next = value;
	/* return pointer */
	return (*head);
	free(value);
}
