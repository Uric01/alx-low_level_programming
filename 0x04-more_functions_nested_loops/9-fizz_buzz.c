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
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz\n");
}
else
{
printf("%d\n", i);
}
}
printf("\n");
return (0);
}
