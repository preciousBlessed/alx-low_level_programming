#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - Diagonal line drawer
 * @n: The number of line elements to print
 * Description: Receiving n, it draws a diagonal line of length n times '\'
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j, space;

	i = j = 0;

	if (n <= 0)
		_putchar('\n');
	else if (n > 0)
	{
		while (i < n)
		{
			for (space = 0; space < j; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			j++;
			i++;
		}
	}
}
