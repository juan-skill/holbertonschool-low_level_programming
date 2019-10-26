#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format_s - stuct to get format
 *
 * @c: character of format
 * @p_f: pointer function
 * Description: it call the function depending on the format
 */
typedef struct format_s
{
	char c;
	void (*p_f)(va_list);
} forma_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(va_list valist);
void _print_int(va_list valist);
void _print_string(va_list valist);
void _print_float(va_list valist);

#endif
