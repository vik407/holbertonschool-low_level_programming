#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: The head of the list
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = NULL, *_head = head;
	size_t i = 0, j = 0;

	if (!head || !index || index < 0)
		return (NULL);
	/* How many? */
	while (_head)
	{
		_head = _head->next;
		i++;
	}
	/* Not found if the i it's less than index */
	if (i < index)
		return (NULL);
	/* Now loop til the index and get the nth node */
	while (head)
	{
		if (j == index)
		{
			nth_node = head;
			head = NULL;
		} else
		{
			head = head->next;
			j++;
		}
	}
	return (nth_node);
}
