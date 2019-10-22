#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _strcpy - opies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *copy_p;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	copy_p = dest;

	return (copy_p);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog
 * Return: a pointer that points a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	(*new_dog).name = new_name;
	(*new_dog).age = age;
	(*new_dog).owner = new_owner;

	return (new_dog);
}
