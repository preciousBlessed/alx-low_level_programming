#include "main.h"

/**
 * puts2 - Prints even position characters
 * @str: string to parse and output even position characters
 * Description: Function reads the string and outputs characters
 * having even indices
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

