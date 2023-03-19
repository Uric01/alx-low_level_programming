#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
return (0);
}
