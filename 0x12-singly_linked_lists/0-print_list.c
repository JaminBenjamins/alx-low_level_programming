#include "lists.h"

/**
 * print_list - a function that prints a list of characters
 * @h: pointer to list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *n = h;

	while(n != NULL)
	{
		if (h->str != NULL)
			printf("%d, %s\n", n->len, n->str);
		else
			printf("[0] (nil)\n");
	}
	node++;
	n = n->next;

	return (node);
}
