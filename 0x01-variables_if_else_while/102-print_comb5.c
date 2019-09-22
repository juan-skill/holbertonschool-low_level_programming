#include <stdio.h>

/**
 * main - returns two digit numbers without repeating
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i, j, num1, num2, num3, num4;


	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			num1 = i / 10;
			num2 = i % 10;
			num3 = j / 10;
			num4 = j % 10;
			if ((num1 == num3 && num2 < num4) || num1 < num3)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(' ');
				putchar(num3 + '0');
				putchar(num4 + '0');
				if (!(num1 == 9 && num2 == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
