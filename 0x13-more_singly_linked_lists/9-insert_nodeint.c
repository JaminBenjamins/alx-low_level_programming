#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a node at a position
 * @head: pointer to the head node
 * @idx: index where node should be added
 * @n: number of elements in the list
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int x;
	listint_t *new;

	node = *head;
	if (node == NULL)
		return (NULL);

	if (idx != 0)
	{
	for (x = 0; x <= idx; x++)
		node = node->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = node;
		node = new;
	}
	else
	{
		new->next = node->next;
		node->next = new;
	}

	return (new);
}
