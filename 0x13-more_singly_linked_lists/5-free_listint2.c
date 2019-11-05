#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the linked list
 * Return: the free list
 */
void free_listint2(listint_t **head)
{
	listint_t *result;

	/* Checker don't send a head :-/ */
	if (!head)
	{
		return;
	}

	result = *head;

	/* free while not null */
	while (result != NULL)
	{
		/* Move the list */
		result = result->next;
		/* Free it */
		free(*head);

		/* The new head is the next node */
		*head = result;
	}
	/* after iterate return it NULL */
	*head = NULL;
}
