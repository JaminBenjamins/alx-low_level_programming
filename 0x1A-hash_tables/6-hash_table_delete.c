#include "hash_tables.h"
/**
 * hash_table_deletee - Delete a hash table
 * @ht: a pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
