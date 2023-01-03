#include "main.h"
#include <unistd.h>

/**
 * print_triangle - Triangle drawer
 * @size: The size of the triangle (base == height)
 * Description: The funnction takes value for argument
 * size and draws the corresponding triangle using the "#" character
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int baseS, baseP, height, spaceMax, spaceMin;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
	spaceMax = size - 1;
	spaceMin = 1;
	for (height = 0; height < size; height++)
	{
		for (baseS = 0;  baseS < spaceMax; baseS++)
			_putchar(' ');
		for (baseP = 0; baseP < spaceMin; baseP++)
			_putchar('#');
		_putchar('\n');
		spaceMax--;
		spaceMin++;
	}
	}
}
