#include "variadic_functions.h"

/**
 * _print_char - print char type element from va_list
 * @valist: va_list passed to function
 */
void _print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * _print_int - print int type element from va_list
 * @valist: va_list passed to function
 */
void _print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * _print_string- print string element from va_list
 * @valist: va_list passed to function
 */
void _print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}

/**
 * _print_float - print float type element from va_list
 * @valist: va_list passed to function
 */
void _print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}


/**
 * print_all - print all passsed if char, int, float, or string
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{

	forma_t _formates[] = {
		{'c', _print_char},
		{'f', _print_float},
		{'i', _print_int},
		{'s', _print_string},
		{'\0', NULL}
	};
	int i, j;
	char *separator;
	va_list valist;

	separator = "";
	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (_formates[j].c != '\0')
		{
			if (format[i] == _formates[j].c)
			{
				printf("%s", separator);
				_formates[j].p_f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");

}
