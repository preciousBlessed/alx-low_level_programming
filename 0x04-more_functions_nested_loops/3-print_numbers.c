#include "main.h"
#include <unistd.h>

/**
 * print_numbers - NumbersInBaseTen
 *
 * Description: Basically prints the numbers in base10
 * Return: Nothing.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
