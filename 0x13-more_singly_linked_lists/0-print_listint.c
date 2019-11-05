#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: The list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	/*while (h)*/
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
