#include "main.h"
#include <unistd.h>

/**
 * _puts - Prototype puts function
 * @str: The string to display at stdout
 * Description: Will take in a string and display  the string without
 * the '\0' character and with a newLine.
 * Return: Nothing.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
