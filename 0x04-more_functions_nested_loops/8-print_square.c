#include "main.h"
#include <unistd.h>

/**
 * print_square - Square emulator
 * @size: parameter that describes the dimension of square
 * Description: The function emulates a square of length = size
 * Return: Nothing.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
