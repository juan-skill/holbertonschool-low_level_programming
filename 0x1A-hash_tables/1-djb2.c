#include "hash_tables.h"


/**
 * hash_djb2 - djb2 algoritm
 *
 * @str: input string
 * Return: index of hash generated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 0;
	int c = 0;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
