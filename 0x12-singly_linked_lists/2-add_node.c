#include "lists.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string to count
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s++ != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node - add a new node in a list
 *
 * @head: pointer to the list.
 * @str: string to add a new node
 * Return: the address of a new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = *head;
	*head = new;
	return (new);
}
