#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @str: head of the linked list
 * @head: the list struct
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *value;
	int lenstr;

	for (lenstr = 0; str[lenstr] != '\0'; lenstr++)
		;

	/* Malloc here? */
	value = malloc(sizeof(list_t));
	if (value == NULL)
	{
		/* if value is NULL return NULL */
		return (NULL);
		free(value);
	}

	/* Add a new node */
	value->len = lenstr;
	value->str = strdup(str);
	value->next = *head;
	*head = value;
	/* return pointer */
	return (value);
	free(value);
}
