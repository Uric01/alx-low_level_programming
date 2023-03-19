#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if(i == 'e' || i == 'q')
putchar("");
else
putchar(i); 
}
return (0);
}
