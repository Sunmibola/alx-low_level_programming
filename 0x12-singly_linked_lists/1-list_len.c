#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: singly linked list
 *
 * Return: elements in a linked lists
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
