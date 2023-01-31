#include "lists.h"

/**
 * free_list - a function that frees memory
 * @head: pointer to the first element 
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *mancipat = head;

	while(mancipat != NULL)
	{
		fre(mancipat->str);
		free(mancipat->next);
		free(mancipat);
	}
}
