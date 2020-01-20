#include "hash_tables.h"

/**
 * create_node - creates a new key-value to hash table
 *
 * @key: key to add
 * @value: value to add to key
 * Return: the node to hash table
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value  == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}


/**
 * hash_table_set - set a value to a key in a hash_table
 *
 * @ht: hash table to set
 * @key: key to set
 * @value: value to set at key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_ht;
	hash_node_t *new_node, *tmp;

	new_node = NULL;
	if (ht == NULL || key == NULL || strlen(key) <= 0)
		return (0);

	index_ht = key_index((const unsigned char *) key, ht->size);

	tmp = ht->array[index_ht];
	while (tmp != NULL)
	{
		if (strncmp(key, tmp->key, strlen(key)) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value ? 1 : 0);
		}
		tmp = tmp->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index_ht];
	ht->array[index_ht] = new_node;

	return (1);
}
