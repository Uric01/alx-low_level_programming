#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
int num;
char letr;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (letr = 'a'; letr <= 'f'; letr++)
putchar(letr);
putchar('\n');
return (0);
}
