#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet()
{
int l;
for(l = 'a'; l < 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
