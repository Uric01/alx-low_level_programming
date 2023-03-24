#include "main.h"
/**
* more_numbers - function to print numbers
*/
void more_numbers(void)
{
	int i;
	int ans;

	for (i = 0; i < 15; i++)
	{
		ans = i * 10;
		_putchar(ans + '0');
	}
	_putchar('\n');
}
