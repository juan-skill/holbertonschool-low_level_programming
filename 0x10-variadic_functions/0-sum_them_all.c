#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of elements
 *
 * Return: the sum of all them, If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);

	return (sum);
}
