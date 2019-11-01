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
 * add_node_end - adds a new node in the end of a list
 * 
 * @head: pointer to the list.
 * @str: string to add to the new node.
 * Return: the address of a new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new = malloc(sizeof(list_t));

	if (new == 0)
		return (0);

	tmp = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	}
	return (new);
}
