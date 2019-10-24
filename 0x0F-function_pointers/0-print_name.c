#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to print
 * @f: a pointer to call for printing
 * Return: result of operation
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
