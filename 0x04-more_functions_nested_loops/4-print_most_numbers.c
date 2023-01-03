#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - SomeBaseTenNumberPrinter
 *
 * Description: Prints all base 10 numbers except 2 and 4
 * Reuturn: Nothing.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		else
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
