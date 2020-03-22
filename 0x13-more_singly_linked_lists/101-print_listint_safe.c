#include "lists.h"

/**
 * print_listint_safe - print the list (safe version)
 *
 * @head: a pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;

		if (head < head->next)
		{
			/* List of two nodes. The second node pointing to the first one (loop) */
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		else if (head - head->next == 0)
		{
			/* List of one single node pointing to itself */
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}

	return (i);
}
