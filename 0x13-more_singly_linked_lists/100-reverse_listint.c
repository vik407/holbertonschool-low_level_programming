#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 * Return: address of head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (!head || !(*head))
		return (*head);
	first = *head;
	rest = first->next;
	if (!rest)
		return (*head);
	reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;
	*head = rest;
	return (*head);
}
