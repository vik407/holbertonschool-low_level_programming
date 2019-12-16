#include "lists.h"
/**
 * add_dnodeint - Write a function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: The head of the list
 * @n: number to add to the list
 * Return: A pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head)
	{
		node = malloc(sizeof(dlistint_t));
	}
	if (node)
	{
		node->n = n;
		node->prev = NULL;
		node->next = *head;
		if (*head)
		{
			(*head)->prev = node;
		}
		*head = node;
	}
	return (node);
}
