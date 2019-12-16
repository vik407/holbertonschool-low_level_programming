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
	/*Loop til the index and get the nth node */
	while (index > 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
