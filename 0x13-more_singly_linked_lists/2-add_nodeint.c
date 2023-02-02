#include "main.h"

/**
 * add_nodeint - a function that adds a node at the beginning of a list
 * @head: pointer to head
 * @n: number of elements
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = next;
	new->n = n;
	new = *head;

	return (*head);
}
