#include <stdio.h>
/**
* main - check the code
* Return: Always 0 if successful
*/
int main(void)
{
int i;

for (i = 1;  i <= 100; i++)
{
if (i % 3 == 0)
{
printf(" ");
printf("Fizz");
}
else if (i % 5 == 0)
{
printf(" ");
printf("Buzz");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf(" ");
printf("FizzBuzz");
}
else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
