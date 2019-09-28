#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: int number for check
 * Return: void
 */
void print_number(int n)
{
	int pow_ten, num, new_num;
	int boolean_value;

	num = n;
	if (num < 0)
	{
		num = num * (-1);
		_putchar('-');
	}

	pow_ten = 1;
	boolean_value = 1;
	while (boolean_value)
	{
		new_num = num / (pow_ten * 10);
		if (new_num > 0)
			pow_ten = pow_ten * 10;
		else
			boolean_value = 0;
	}


	while (num >= 0)
	{
		if (pow_ten == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			new_num = (num / pow_ten % 10);
			_putchar(new_num + '0');
			pow_ten = pow_ten / 10;
		}
	}
}
