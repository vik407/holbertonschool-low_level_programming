#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @str: head of the linked list
 * If str is NULL, print [0] (nil)
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *value;

	/* Malloc here? */
	value = malloc(sizeof(list_t));
	if (value == NULL)
	{
		/* if value is NULL return NULL */
		return (NULL);
	} else
	{
		/* Len del string entonces debo iterar por str y retornar el len y lo pongo en value-> len */
		/* Add a new node to the top */
		value->len = strlen(str);
		/* Usar strdup(str)  y lo ponemos en value -> str*/
		value->str = strdup(str);
		value->next = *head;
		*head = value;
	}
	
	/* return pointer */
	return (value);
}
