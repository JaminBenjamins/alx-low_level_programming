#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the list
 *
 * Return: number of elements int the list
 */
size_t print_listint(const listint_t *h)
{
	int node;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
