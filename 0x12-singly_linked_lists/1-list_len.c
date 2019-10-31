#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t.
 * @h: head of the linked list
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	/* initialize counter to store the number of nodes */
	counter = 0;
	/* while n is not NULL */
	while (h)
	{
		/* Move the struct */
		h = h->next;
		/* Increase the counter */
		counter++;
	}
	return (counter);
}
