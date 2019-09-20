#include <stdio.h>
/**
* main - display combinations of numbers 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n1, n2, n3;
for (n1 = 48; n1 < 58; n1++)
{
for (n2 = n1 + 1; n2 < 58; n2++)
{
for (n3 = n2 + 1; n3 < 58; n3++)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 == 55 && n2 == 56 && n3 == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
}
return (0);
}
