#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a new node at a
 * given position.
 * @head: head of the linked list
 * @idx: index where the new node should be added. Index starts at 0
 * @n: element to add
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *result;
	unsigned int i = 0;

	result = malloc(sizeof(listint_t));
	/* if the linked list is empty or malloc fails return NULL */
	if (head == NULL || result == NULL)
	{
		return (NULL);
	}
	result->n = n;
	/* if the index is null */
	if (!idx)
	{
		result->next = *head;
		/* The new head is the result (tricky AF) */
		*head = result;
		/* Return the result */
		return (result);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	/* Move the list */
	while (i < idx - 1)
	{
		/* null if the ptr value coming NULL */
		if (ptr == NULL)
		{
			return (NULL);
		}
		/* Move it */
		ptr = ptr->next;
		i++;
	}
	/* Return the result */
	result->next = ptr->next;
	ptr->next = result;
	return (result);
}
