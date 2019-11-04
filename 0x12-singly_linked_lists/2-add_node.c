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
	const char *ptr;

	ptr = s;
	while (*s != '\0')
		s++;
	return (s - ptr);
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
 * add_node - add a new node in a list
 *
 * @head: pointer to the list.
 * @str: string to add a new node
 * Return: the address of a new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	/*if (!head || !str)*/
	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	/*if (!new)*/
	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
