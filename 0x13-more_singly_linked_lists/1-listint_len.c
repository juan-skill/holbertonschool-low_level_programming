#include "lists.h"

/**
 * listint_len - prints the length of the each node
 *
 * @h: the list listin_t
 * Return: the number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	/*if (!h)*/
	if (h == NULL)
		return (0);

	tmp = h;
	/*while (tmp)*/
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
