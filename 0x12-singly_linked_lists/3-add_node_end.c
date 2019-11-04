#include "lists.h"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, const char *src)
{
	char *s;

	s = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';

	return (s);
}


/**
 * _strlen - returns the length of a string
 *
 * @s: string type char
 * Return: returns the lenght of a string
 */
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;

	return (len);
}



/**
 * _strdup - duplicates a string to a newly allocated space *
 *
 * @str: string to duplicate
 * Return: returns pointer to duplicated string
 */
char *_strdup(const char *str)
{
	char *s_dup;

	s_dup = NULL;

	if (str == NULL)
		return (NULL);

	s_dup = malloc(1 + _strlen(str));
	/* if (!s_dup) */
	if (s_dup == NULL)
		return (NULL);

	s_dup = _strcpy(s_dup, str);

	return (s_dup);
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
	list_t *new;

	tmp = new = NULL;

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);

	new->str = _strdup(str);
	new->len = _strlen(str);

	/*if (!*head)*/
	if (*head == NULL)
	{
		/*new->next = NULL;*/
		*head = new;
	}
	else
	{
		tmp = *head;
		/*while tmp->next != NULL*/
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		/*new->next = NULL;*/
	}
	new->next = NULL;

	return (new);
}
