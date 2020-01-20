#include "hash_tables.h"



/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: input hash table
 * Return void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *holder= NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			holder = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = holder;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
