#include "lists.h"
/**
 * insert_dnodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @h: The head of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: The value n
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *_h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	_h = *h;
	if (!idx)
	{
		new->next = _h;
		new->prev = NULL;
		if (_h)
			_h->prev = new;
		*h = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (!_h)
			return (NULL);
		_h = _h->next;
		i++;
	}
	new->next = _h->next;
	new->prev = _h;
	if (new->next)
		new->next->prev = new;
	_h->next = new;
	return (new);
}
