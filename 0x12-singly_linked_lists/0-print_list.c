#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head of the linked list
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	/* initialize counter to store the number of nodes */
	counter = 0;
	/* while n is not NULL */
	while (h)
	{
		/* if h is NULL */
		if (h != NULL)
		{
			if (h->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			/* Move the struct */
			h = h->next;
			/* Increase the counter */
			counter++;
		}
	}
	/* Return: the number of nodes */
	return (counter);
}
