#include "lists.h"

/**
 * reverse_listint - reverse a list 
 * @head: pointer to the node to reverse
 * Return: pointer to the node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	if (!*head)
		return (NULL);
	
	while ((*head) != NULL)
	{
		p = (*head)->next;
		(*head)->next = n;
		n = p;
		p = *head;
	}
	*head = (*head)->next;
	return (*head);
}

		
