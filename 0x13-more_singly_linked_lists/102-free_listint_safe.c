#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_listint_safe - free a listint_t list (it can have a loop)
 *
 * @h: The list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	size_t i = 0;
	int flag = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while ((*h) != NULL)
	{
		i++;

		if ((*h) < (*h)->next)
		{
			flag = 1;
		}
		else if ((*h) - (*h)->next == 0)
		{
			flag = 1;
		}

		if (flag == 1)
		{
			free((*h));
			*h = NULL;
			break;
		}

		tmp = *h;
		*h = (*h)->next;
		free(tmp);
	}

	return (i);
}
