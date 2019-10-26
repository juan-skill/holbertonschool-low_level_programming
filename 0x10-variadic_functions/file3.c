#include "variadic_functions.h"


/**
 * print_all - prints char, integer, float
 *
 * @
 *
 */
int _is_format(const char format_i)
{
	if ((format_i == 'c' || format_i == 'i' || format_i == 'f' || format_i == 's'))
		return (1);
	return (0);
}

void print_all(const char * const format, ...)
{
	va_list va_argu;
	char *t_str;
	int i;
	char format_i;

	va_start(va_argu, format);
	while (format == NULL)
		return;

	i = 0;
	format_i = format[i];
	while (format_i != '\0')
	{
		format_i = format[i];
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(va_argu, int));
			break;
		case 'i':
			printf("%i", va_arg(va_argu, int));
			break;
		case 's':
			t_str = va_arg(va_argu, char *);
			if (t_str != NULL)
				printf("%s", t_str);
			else
				printf("(nil)");
		}
		if(_is_format(format_i) && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");
}
