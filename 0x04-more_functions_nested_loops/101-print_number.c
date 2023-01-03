#include "main.h"
#include <unistd.h>

/**
 * print_number - Number printer
 * @n: The number to print
 * Description: Receives a number and prints it using
 * manual memory sharing and _putchar
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n == 0)
		_putchar(n + '0');
	else
	{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
	}
}
