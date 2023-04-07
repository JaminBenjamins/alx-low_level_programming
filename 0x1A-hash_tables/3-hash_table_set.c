#include "hash_tables.h"
/**
 * hash-table_set - adds an element to a hash table
 * @ht: a pointer to the hash table
 * @key: the key to add
 * @value: the value associated with the key
 * 
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	char *cp_val;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_val = strdup(value);
	if (cp_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index;ht->array[i];i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_val;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
