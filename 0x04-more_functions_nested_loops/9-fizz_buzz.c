#include "main.h"
/**
 * FizzBuzz
 *
 * A program that prints the numbers from 1 to 100.
 * Multiples of three print “Fizz” instead of the number, and multiples of five print “Buzz”.
 * For numbers which are multiples of both three and five print “FizzBuzz”.
 */

int main(void)
{
    for (unsigned int i = 1; i <= 100; i++) 
    {
        if (i % 15 == 0)
	{
	    _putchar("FizzBuzz");
        } else if (i % 3 == 0) 
	{
	    _putchar("Fizz");
        } else if (i % 5 == 0)
	{
	    _putchar("Buzz");
        } else
	{
	    _putchar(i + '0');
        }
    }
    _putchar('\n');
    return 0;
}
