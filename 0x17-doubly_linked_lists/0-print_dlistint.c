#include "lists.h"
/**
 * print_dlistint - a function tat prints nodes in a list
 * h: pointer to nodes in list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return(i);
}