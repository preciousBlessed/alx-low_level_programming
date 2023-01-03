#include "main.h"
#include <unistd.h>

/**
 * print_line - Line Printer
 * @n: The number of times the line element should appear
 * Description: Draws a line of length n times the character '_'
 * Return: Nothing.
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
