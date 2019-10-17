#include "holberton.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The string
 *
 * Return: The number of words (any characters separated by spaces)
 */
int count_words(char *str)
{
	int i;
	int count = 0, word = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && word == 0)
		{
			count++;
			word = 1;
		}
		else if (str[i] == ' ')
		{
			word = 0;
		}
		i++;
	}

	return (count);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string type char
 * Return: returns the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;

	return (len);
}


/**
 * strtow - splits a string into words
 * @str: The string to split
 *
 * Return: returns a pointer to an array of strings (words)
 * returns NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, temp_len = 0;
	char **arr;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	if (count_words(str) == 0)
		return (NULL);
	arr = malloc((count_words(str) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			for (k = i, temp_len = 0; str[k] != '\0' && str[k] != ' '; k++)
				temp_len++;

			arr[j] = malloc(sizeof(char) * (temp_len + 1));
			if (arr[j] == NULL)
			{
				free(arr);
				for (k = 0; k <= j; k++)
					free(arr[k]);
				return (NULL);
			}
			k = 0;
			while (str[i] != '\0' && str[i] != ' ')
			{
				arr[j][k] = str[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
