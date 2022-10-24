#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: Pointer node
 *
 * Return: head node’s data (n), else 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (*head == NULL)
		return (0);
	tmp = *head;
	node = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (node);
}
