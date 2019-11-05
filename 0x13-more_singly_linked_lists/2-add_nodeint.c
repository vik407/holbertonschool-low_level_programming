#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list.
 * @head: head of the linked list
 * @n: Node element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *result = malloc(sizeof(listint_t));

	/* If malloc returns null, return null */
	if (result == NULL)
		return (NULL);

	/* add a new node */
	result->n = n;
	result->next = *head;

	/* the result becomes the new head */
	*head = result;
	/* And return the address of the new element */
	return (*head);
}
