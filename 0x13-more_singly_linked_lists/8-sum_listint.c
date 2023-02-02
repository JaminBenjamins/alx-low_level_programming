#include "lists.h"

/**
 * sum_listint - a function that adds number of list
 * @head: point to the head of list
 * @n: number of elements in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *sum = head;
	int i;
	int count;

	if (sum == NULL)
		return (0);

	for (i = 0; i < head->n; i++)
		count += i;

	head = head->next;
	return (count);
}

