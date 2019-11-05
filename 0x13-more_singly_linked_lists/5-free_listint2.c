#include "lists.h"

/**
 * free_listint2 - free all list
 *
 * @head: a pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return;

	/*while (*head)*/
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
