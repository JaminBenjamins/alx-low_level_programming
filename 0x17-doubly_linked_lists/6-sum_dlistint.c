#include "lists.h"
/**
 * sum_dlistint - a function that sms data in a node
 * @head: pointer to the first node
 * Return: suum of all data in a node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *i;
	int sum = 0;

	for (i = head; i != NULL; i = i->next)
		sum += i->n;
	return (sum);
}
