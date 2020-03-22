#include "lists.h"

/**
 * print_listint_safe - print the list (safe version)
 *
 * @head: a pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	/* const listint_t *tmp2, *tmp; */
	size_t i = 0;

	if (head == NULL)
		return (0);

<<<<<<< HEAD
	tmp = head;
	flag = i = 0;      /* count of nodes */

	while (tmp != NULL)
=======
	while (head != NULL)
>>>>>>> featurejuan
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;

		if (head < head->next)
		{
<<<<<<< HEAD
			if (tmp2 == tmp)
			{
				printf("-> [%p] %d\n", (void *)tmp2, tmp2->n);
				flag = 1;
				break;
			}
			tmp2 = tmp2->next;
		}
		if (flag == 1)
=======
			/* printf(" head < head->next [%p] %d > [%p] %d\n", (void *)head, head->n, (void *)head->next, head->next->n); */
			/* printf(" head %ld > head->next %ld       head = head->next\n", i, i + 1); */
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
>>>>>>> featurejuan
			break;
		}
		/* 	printf(" head > head->next [%p] %d > [%p] %d\n", (void *)head, head->n, (void *)head->next, head->next->n); */
		/* 	printf(" head %ld > head->next %ld       head = head->next\n", i, i + 1); */
		head = head->next;
	}

	return (i);
}
