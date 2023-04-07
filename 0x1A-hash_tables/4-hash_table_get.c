#include "hash_tables.h"
/**
 * hash_table_get - Find a value stored in a
 * 			a key in the table.
 * @ht: pointer to the has table
 * @key: the key to get the value of
 *
 * Return: NULL if the key cannot be matched
 * 		Otherwise return value associtaed with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return NULL;

	node = ht->array[index];
	while(node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node = NULL) ? NULL : node->value);
}
