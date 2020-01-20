#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of the hash table
 * Return: pointer to new hash table or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
		new_ht->array[i++] = NULL;

	return (new_ht);
}
