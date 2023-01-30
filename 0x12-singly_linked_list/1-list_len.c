#include "main.h"

/**
 * list_len: list the number of elements in a list
 * @h: pointer to the list
 *
 * Return number of elements
 */
size_t list_len(const list_t *h)
{
	size_t element;

	while(h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
