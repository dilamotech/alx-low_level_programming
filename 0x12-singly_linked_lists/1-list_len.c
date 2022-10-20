#include "lists.h"

/**
 *list_len - returns the alements in list.
 *@h: The singly linked list
 *Return: The number of elements in the list
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
