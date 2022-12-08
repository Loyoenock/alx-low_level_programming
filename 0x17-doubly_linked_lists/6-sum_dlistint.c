#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t list.
 * @head: list pointer.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
