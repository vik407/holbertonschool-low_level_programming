#include "lists.h"
/**
 * delete_dnodeint_at_index - Write a function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: The head of the list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *_h, *node;

	if (!*head)
		return (-1);
	_h = *head;
	node = *head;
	if (!index)
	{
		/* set the copy */
		_h = _h->next;
		if (_h)
			_h->prev = NULL;
		/* Clear the original */
		free(*head);
		/* Reassign */
		*head = _h;
		return (1);
	}
	while (index)
	{
		if (!_h)
			return (-1);
		/* set the copy */
		_h = _h->next;
		index--;
	}
	node = _h->next;
	_h->prev->next = node;
	if (node)
		node->prev = _h->prev;
	free(_h);
	return (1);
}
