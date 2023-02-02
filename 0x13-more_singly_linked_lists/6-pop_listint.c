#include "lists.h"

/**
 * pop_listint - deletes the head of a node 
 * @head: pointer to the head node
 * Return: data in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *buf;
	int data;

	if (*head == NULL)
		return (0);

	buf = *head;
	data = buf->n;
	free(*head);

	(*head) = (*head)->next;
	return (data);
}
