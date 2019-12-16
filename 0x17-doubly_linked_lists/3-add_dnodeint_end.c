#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: The head of the list
 * @n: number to add to the list
 * Return: A pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *nodehead = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	if (!nodehead)
	{
		/* Add node */
		node->next = *head;
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (nodehead->next)
	{
		/* Move nodes to put a new one */
		nodehead = nodehead->next;
	}
	nodehead->next = node;
	node->prev = nodehead;
	return (node);
}
