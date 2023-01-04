#include "main.h"

/**
 * puts_half - Prototype function to find and print half of string
 * @str: A String parameter to check and print it's half
 * Description: The function receives a string and prints
 * first half for even characters or second half for odd characters
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int count, mid, start, c;

	count = c = 0;

	while (str[c] != '\0')
	{
		count++;
		c++;
	}
	mid = count / 2;
	if (count % 2 == 0)
	{
		while (mid < count)
		{
			_putchar(str[mid]);
			mid++;
		}
	}
	start = 0;
	if (count % 2 != 0)
	{
		while (start < (count / 2))
		{
			_putchar(str[start]);
			start++;
		}
	}
	_putchar('\n');
}
