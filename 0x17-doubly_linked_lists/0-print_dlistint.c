#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - Write a function that prints all the elements
 * of a dlistint_t list.
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int res = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	/* Return the counter */
	res = i;
	return (res);
}
