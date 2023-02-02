#include "lists.h"

/**
 * get_nodeint_at_index - gets the number of a node at an index
 * @head: pointer to the head
 * @index: index of node
 * Return: node index otherwise null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
