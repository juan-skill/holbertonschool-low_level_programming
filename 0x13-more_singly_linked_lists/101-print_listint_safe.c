#include "lists.h"

/**
 * print_listint_safe - print the list (safe version)
 *
 * @head: a pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp2, *tmp;
	size_t i, n;

	tmp2 = tmp = NULL;

	/*if (!head)*/
	if (head == NULL)
		return (0);

	tmp = head;
	i = 0;
	/*while (tmp)*/
	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		i++;

		tmp2 = head;
		for (n = 0; n < i; n++)
		{
			if (tmp2 == tmp)
			{
				printf("   tmp [%p] %d\n", (void *)tmp, tmp->n);
				printf("-> tmp2   [%p] %d\n", (void *)tmp2, tmp2->n);
				return (i);
			}
			tmp2 = tmp2->next;
		}
	}
	return (i);
}
