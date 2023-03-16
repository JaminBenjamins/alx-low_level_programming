#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a node at the end
 * @head: pointer to the head f the node
 * @n: data to add
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->next = new;
		}
	}
	else
		*head = new;
	return (new);
}
