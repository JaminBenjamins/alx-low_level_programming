#include "lists.h"

/**
 * listint_len - a function that returns number of elements in a list
 * @h: pointer to struct 
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int element = 0;

	while (h != NULL)
	{
		for (;element < h->n;)
			element++;
		h = h->next;
	}
	return (element);
}
