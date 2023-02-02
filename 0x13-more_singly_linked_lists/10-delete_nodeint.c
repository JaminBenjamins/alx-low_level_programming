#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 * @head: point to te first node
 * @index: index of node to be deleted
 * Return: 1 if succeed -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *n;
	unsigned int i;

	p = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			p = p->next;
		}
	}
	if ((index != 0 && p == NULL) || p->next == NULL)
	{
		return (-1);
	}
	n = p->next;
	if (index != 0)
	{
		p->next = n;
		free(n);
	}
	else
	{
		n->next = p;
		free(p);
	}
	return (1);
}
