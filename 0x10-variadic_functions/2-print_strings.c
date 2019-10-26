 #include "variadic_functions.h"


/**
 * print_strings - prints strings
 *
 * @separator: the string to be printed between the string
 * @n: the number of the strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *t_str;
	unsigned int i;
	va_list valist;

	if (n < 1)
		return;

	va_start(valist, n);
	i = 0;
	while (i < n)
        {
		t_str = va_arg(valist, char *);
		if (t_str != NULL)
			printf("%s", t_str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(valist);
	printf("\n");
}
