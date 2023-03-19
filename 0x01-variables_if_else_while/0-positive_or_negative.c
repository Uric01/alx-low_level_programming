#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entrance point
 * Return: returns 0 if successful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%i is negative", n);
}
else if (n > -1 && n != 0)
{
printf("%i is positive", n);
}
else if (n == 0)
{
printf("%i is zero", n);
}
return (0);
}
