#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 * @head: pointer to first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
