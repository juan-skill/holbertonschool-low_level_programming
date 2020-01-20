#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 *
 * @ht: input hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
