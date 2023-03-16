#include "lists.h"
/**
 * get_dnodeint_at_index - a function that gets node at an index
 * @head: pointer to the first node
 * @index: the index of a node
 *
 * Return: pointer to the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned  int n;

	if (head == NULL)
		return (NULL);
	if (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	return (head);
}
