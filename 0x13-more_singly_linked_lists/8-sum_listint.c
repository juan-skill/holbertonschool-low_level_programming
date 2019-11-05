#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a list
 *
 * @head: a pointer to head of list
 * Return: sum of all the data (n) of a list
 */
int sum_listint(listint_t *head)
{
	size_t i;
	listint_t *tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (0);

	i = 0;
	tmp = head;
	/*while (head)*/
	while (tmp != NULL)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
