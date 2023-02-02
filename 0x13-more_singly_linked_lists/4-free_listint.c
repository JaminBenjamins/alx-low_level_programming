#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node
 *
 * Return:nothing
 */
void free_listint(listint_t *head)
{
	listint_t *frei = head;

	while (frei != NULL)
	{
		frei = frei->next;
		free(frei);
	}
}
