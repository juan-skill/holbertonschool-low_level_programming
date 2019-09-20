#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - display all numbers 0-9
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
