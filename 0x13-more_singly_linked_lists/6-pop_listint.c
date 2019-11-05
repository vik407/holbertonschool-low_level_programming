#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: head of the linked list
 * Return: 0 if is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *result;
	/* The data (n) */
	int n;

	/* if the linked list is empty return 0 */
	if (!*head)
	{
		return (0);
	}

	result = *head;

	/* head node’s data */
	n = result->n;
	/* Move next */
	*head = result->next;
	/* free the head */
	free(result);

	/* returns the head node’s data (n) */
	return (n);
}
