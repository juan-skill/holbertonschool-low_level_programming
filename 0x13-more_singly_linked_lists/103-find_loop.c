#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 *
 * @head: The list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = NULL;
	int flag = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp < tmp->next)
		{
			tmp = tmp->next;
			flag = 1;
		}
		else if (tmp - tmp->next == 0)
		{
			flag = 1;
		}

		if (flag == 1)
		{
			break;
		}

		tmp = tmp->next;
	}

	return (tmp);
}
