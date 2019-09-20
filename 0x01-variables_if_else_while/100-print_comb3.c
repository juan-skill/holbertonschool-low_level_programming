#include <stdio.h>
/**
* main - display number 01 to 89
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n1;
int n2;
for (n1 = 48; n1 < 58; n1++)
{
for (n2 = n1 + 1; n2 < 58; n2++)
{
putchar(n1);
putchar(n2);
if (n1 == 56 && n2 == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
}
return (0);
}
