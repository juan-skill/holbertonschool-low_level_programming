#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: double pointer to head of list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp = NULL;

	/*if (!head || !(*head))*/
	if (head == NULL || (*head) == NULL)
		return (0);

	n = (*head)->n;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
