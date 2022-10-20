#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer at the head of the first node
 * @str: stings to be added to the list_t
 *
 *  Return: address of the new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_node;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new_node = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = new_node;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
