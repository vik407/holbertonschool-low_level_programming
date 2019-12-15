
#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	int res = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	/* Return the counter */
	res = i;
	return (res);
}
