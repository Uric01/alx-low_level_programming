#include <stdio.h>
#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
int digit1 = 0;
int digit2, digit3;
while (digit1 < 8)
for (digit1 = 0; digit1 < 8; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 9; digit2++)
{ 
for (digit3 = digit2 + 1 ; digit3 < 10; digit3++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
putchar((digit3 % 10) + '0');
if (digit1 == 7 && digit2 == 8 && digit3 == 9)
{
break;
}
else
{
putchar(44);
putchar(32);
}
continue;
putchar(',');
putchar(' ');
}
}
}
return (0);
}
