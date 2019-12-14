#include "lists.h"

/**
 * print_dlistint - prints elements of the list
 *
 * @head: a pointer to the first element into list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t c_nodes = 0;
	const dlistint_t *tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (c_nodes);

	/*Do not change the head reference*/
	tmp = head; /* while (tmp)  */
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		c_nodes++;
	}
	return (c_nodes);
}
