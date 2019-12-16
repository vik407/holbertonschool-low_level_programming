#include "lists.h"
/**
 * free_dlistint - Write a function that free a dlistint_t list.
 * @head: The head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_head;

	while (head)
	{
		/* Next head is the temp head */
		_head = head->next;
		/* Delete current head */
		free(head);
		/* temp head is the new head */
		head = _head;
	}
}
