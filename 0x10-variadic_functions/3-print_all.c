#include "variadic_functions.h"

/**
 *
 *
 *
 *
 */
void _print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 *
 *
 *
 *
 *
 */
void _print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 *
 *
 *
 *
 *
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

void _print_float(va_list valist )

/**
 * print_all - prints 
 *
 *
 *
 */
void print_all(const char * const format, ...)
{

	forma_t _formates[] = {
		{'c', _print_char},
		{'i', _print_int},
		{'s', _print_string},
		{'\0', NULL}
	};

	va_list valist;
	int i, j;

	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (_formates[j].c != '\0')
		{
			if (format[i] == _formates[j].c)
			{
				_formates[j].p_f(valist);
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");

}
