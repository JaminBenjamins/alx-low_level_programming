#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the last node
 * @n: number of elements 
 *
 * Return: address of new element otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = *head;
	listint_t *new;

	end = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	
	else 
	{
		end = *head;
		while (end  != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
