#include "lists.h"

/**
 * list_len - Number of elements in linked list_t
 * @h: linked list_t.
 *
 * Return: Number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
