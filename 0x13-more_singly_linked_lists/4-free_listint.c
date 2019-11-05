#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head of the linked list
 * Return: the free list
 */
void free_listint(listint_t *head)
{
	listint_t *result;

	/* free nodes while head is not null */
	while (head != NULL)
	{
		result = head;
		/* Move the list */
		head = head->next;
		free(result);
	}

}
