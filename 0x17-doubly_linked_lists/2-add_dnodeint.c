#include "lists.h"
/**
 * add_dnodeint - a function that adds node at beginning of a list
 * *head: the address of a list 
 * n: index of list
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return(NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head != NULL)
		new->prev = new;
	*head = new;
	return (new);
}
