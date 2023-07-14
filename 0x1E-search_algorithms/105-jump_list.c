#include "search_algos.h"

/**
 * jump_list - functions that searches for an algorithm
 * in a sorted singly linked list using jump search algorithm
 * @list: pointer to the head of linked list to search
 * @size: no. of nodes in the list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located or NULL
 * if value is not present or head of list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%d]\n",
node->index, jump->index);

for (; node->index < jump->index && node->n < value; node = node->next)
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

return (node->n == value ? node : NULL);
}
