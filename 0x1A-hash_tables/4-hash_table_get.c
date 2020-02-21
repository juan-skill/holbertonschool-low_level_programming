#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: input hash table
 * @key: input key (looking for)
 * Return: he value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}