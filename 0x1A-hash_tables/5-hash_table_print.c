#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hashtable to print
 *
 * info: the key value pairs are printed sequentially
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char delim = 0;

	if (ht == NULL)
		return;

	printf("{");
	for(index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (delim == 1)
				print(",");

			node = ht->array[index];
			while (node != NULL)
			{
				print("%s, %s", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(",");
			}
			delim = 1;
		}
	}
	printf("}\n");
}
