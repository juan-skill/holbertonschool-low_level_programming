#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: the string to be print between numbers
 * @n: numbers of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n < 1)
	{
		putchar('\n');
		return;
	}

	va_start(valist, n);

	i = 0;
	while (i < n)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(valist, int), separator);
		else
			printf("%d", va_arg(valist, int));
		i++;
	}
	va_end(valist);

	printf("\n");
}
