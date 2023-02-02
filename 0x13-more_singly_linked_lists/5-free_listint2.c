#include "lists.h"

/**
 * free_lisint2 - frees a list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t **tmp = head;
	listint_t *buf;

	while (tmp != NULL)
	{
		buf = *tmp;
		buf = buf->next;
		free(*tmp);
	}
	*head = NULL;
}
