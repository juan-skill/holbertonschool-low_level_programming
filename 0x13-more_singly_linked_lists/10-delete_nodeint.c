#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the specified node
 *
 * @head: double pointer to head of list
 * @index: is the index of the node that should be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *del, *tmp;

	current = *head;
	del = NULL;
	i = 0;

	/*if (!head || !(*head))*/
	if (head == NULL || (*head) == NULL)
		return (-1);

	i++;
	while (i < index)
	{
		tmp = current->next;
		if (tmp != NULL)
			current = tmp;
		else
			return (-1);
		i++;
	}

	/*if (index)*/
	if (index == 0)
	{
		del = current;
		*head = current->next;
	}
	else
		del = current->next;

	current->next = del->next;

	free(del);

	return (1);
}
