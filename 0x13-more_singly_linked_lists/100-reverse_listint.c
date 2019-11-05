#include "lists.h"

/**
 * reverse_listint - reverse a list
 *
 * @head: double pointer to head of list
 * Return: a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *new_head;

	tmp = new_head = NULL;

	/*if (!(*head))*/
	if (*head == NULL)
		return (NULL);

	/*while (head)*/
	while (*head != NULL)
	{
		new_head = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = new_head;
	}
	*head = tmp;

	return (*head);
}
