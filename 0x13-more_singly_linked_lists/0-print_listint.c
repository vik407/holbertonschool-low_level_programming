#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
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
			printf("%d\n", h->n);
			/* Move the list */
			h = h->next;
			/* Increase the counter */
			counter++;
		}
	}
	/* Return: the number of nodes */
	return (counter);
}
