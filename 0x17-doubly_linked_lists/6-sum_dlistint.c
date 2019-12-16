#include "lists.h"
/**
 * sum_dlistint - Write a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: The head of the list
 * Return: f the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (!head)
		return (res);
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
