#include <stdio.h>
/**
* main - Aply number 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
int numx;
for (num = 48; num < 58; num++)
{
for (numx = 48; numx < 58; numx++)
{
putchar(num);
putchar(numx);
if (num == 57 && numx == 57)
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
