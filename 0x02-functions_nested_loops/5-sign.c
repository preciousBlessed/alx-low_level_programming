#include "main.h"

/**
 * print_sign - Checks the polarity of a number
 * @n: the number to check it's sign
 * Description: A number sign checker
 * Return: 1 and prints + if n is +ve | -1 and prints - if n is -ve | 0 and O
 * if n is 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
