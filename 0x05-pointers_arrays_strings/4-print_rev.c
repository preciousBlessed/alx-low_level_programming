#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prototype function to reverse a string
 * @s: The string to reverse
 * Description: Function reverses the order of the string s
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int count, c, i;

	count = c = 0;

	while (*(s + c) != '\0')
	{
		count++;
		c++;
	}
	i = count;
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
