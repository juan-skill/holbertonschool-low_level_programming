#include <stdio.h>
/**
* main - display number and show if option
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
if (num == 57)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
}
return (0);
}
