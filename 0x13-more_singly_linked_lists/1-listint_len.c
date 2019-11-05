#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list
 * @h: head of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	/* initialize counter to store the number of nodes */
	counter = 0;
	/* while h */
	while (h)
	{
		/* if h is not NULL */
		if (h != NULL)
		{
			/* Move the list */
			h = h->next;
			/* Increase the counter */
			counter++;
		}
	}
	/* Return: the number of nodes */
	return (counter);
}
