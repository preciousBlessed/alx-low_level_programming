#include "main.h"
#include <unistd.h>

/**
 * more_numbers - Number print repeater
 *
 * Description: Prints numbers 0 to 14 ten times
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
		if (i >= 10)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
