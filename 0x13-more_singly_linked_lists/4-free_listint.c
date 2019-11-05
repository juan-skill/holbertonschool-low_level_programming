#include "lists.h"

/**
 * free_listint - free all list
 *
 * @head: a pointer to head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	/*while (head)*/
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
