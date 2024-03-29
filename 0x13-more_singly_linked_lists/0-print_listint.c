#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the list
 *
 * Return: number of elements int the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h; 
	size_t node = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		node++;
		p = p->next;
	}
	return (node);
}
