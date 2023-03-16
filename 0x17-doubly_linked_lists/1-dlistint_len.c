#include "lists.h"
/**
 * dlistint_len - a function that returns length of a list
 * h: list of elements
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i; 

	while (h != NULL)
	{
		for (i = 0; i < h->n; i++)
		h = h->next;
	}
	return(i);
}
