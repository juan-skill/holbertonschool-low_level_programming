#include "holberton.h"
#include <stdio.h>

/**
 * count_char_line - counts how many characteres
 * there are per line
 *
 * @b: buffer to count
 * @pos: location currently
 * @size: size of the buffer
 * Return: an int amount of characters
 */
int count_char_line(char *b, int pos, int size)
{
	int z, count = 0;

	for (z = pos; z < pos + 10 && z < size && *b != '\0'; z++)
		count++;
	return (count);
}

/**
 * add_space - adds space if it is neccessary
 *
 * @line: location current line
 * @lenght: lenght maximum line
 * Return: void
 */
void add_space(int line, int lenght)
{
	while (lenght < line + 10)
	{
		if (!(lenght % 2))
			printf("  ");
		else
			printf("   ");
		lenght++;
	}
}


/**
 * print_buffer - prints a buffer
 * (hexadecimal format)
 *
 * @b: buffer to print
 * @size: size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, l;

	i = j = l = 0;

	if (size <= 0)
		printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%08x: ", i);

		l = count_char_line(b, i, size);

		j = i;
		while (j < i + l)
		{
			if (!(j % 2))
				printf("%02x", *(b + j));
			else
				printf("%02x ", *(b + j));
			j++;

		}
		add_space(i, j);

		j = i;
		while (j < i + l)
		{
			if (*(b + j) < ' ')
				printf(".");
			else
				printf("%c", *(b + j));
			j++;
		}
		printf("\n");
		i += 10;
	}

}
