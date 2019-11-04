#include "lists.h"

/**
 * list_len - returns number of elements in list.
 * @head: a pointer to the list
 * Return: return number of elements in list
 */
size_t list_len(const list_t *head)
{
	size_t i = 0;
	const list_t *tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (0);

	tmp = head;
	/*while (head)*/
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
