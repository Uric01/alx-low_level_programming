#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void) {
int digit1 = 0;
int digit2;
while (digit1 < 10)
for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (digit1 == 9 && digit2 == 9)
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
putchar('\n');
return (0);
}
