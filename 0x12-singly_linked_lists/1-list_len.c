#include "lists.h"

/**
 * list_len - Returns the number of elements
 *		in a linked list_t list.
 * @h: singly linked list
 *
 * Return: Number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);

}
