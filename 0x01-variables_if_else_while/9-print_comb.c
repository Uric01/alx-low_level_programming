#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
int num = 0;
while (1)
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
