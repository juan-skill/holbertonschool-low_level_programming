#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a list.
 *
 * @head: a pointer to head of list
 * @index: is the index of the node, starting at 0
 * Return: the nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp = NULL;

	tmp = head;

	/*if (!head)*/
	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		/*if (!tmp->next)*/
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
