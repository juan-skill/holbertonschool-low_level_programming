#include "lists.h"

/**
 * list_len - returns number of elements in list.
 * @head: a pointer to the list
 * Return: return number of elements in list
 */
size_t list_len(const list_t *head)
{
	size_t i;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		head = head->next;
	}
	return (i);
}
