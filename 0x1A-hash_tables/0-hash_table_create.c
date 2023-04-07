#include "hash_tables.h"
/**
 * hash-table_create - creating a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */

/**
 * The procedure is through memory allocation
 * for the nodes of the table and pointer to nodes
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h_table->array[i] =  NULL;
	return (h_table);
}

