#include "main.h"
/**
 * print_alphabet_x10- prints small letter alphabets 10 times
 */
void print_alphabet_x10(void)
{
int l;
int i;
for (i = 0; i < 10; ++i)
{
for (l = 'a'; l <= 'z'; ++i)
{
_putchar(l);
}
_putchar('\n');
}
}
