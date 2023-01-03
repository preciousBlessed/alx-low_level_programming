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
	int nUH, nLH;

	nUH = n / 100;
	nLH = n % 100;

	if ((n >= 10 && n < 100) || (n > -100 && n <= -10))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 0 && n < 10) || (n > -10 && n < 0))
		_putchar(n + '0');
	else if ((n >= 100 && n <= 999) || (n >= -999 && n <= -100))
	{
		_putchar(nUH + '0');
		_putchar((nLH / 10) + '0');
		_putchar((nLH % 10) + '0');
	}
	else if ((n >= 1000 && n <= 9999) || (n >= 9999 && n <= -1000))
	{
		_putchar((nUH / 10) + '0');
		_putchar((nUH % 10) + '0');
		_putchar((nLH / 10) + '0');
		_putchar((nLH % 10) + '0');
	}
	_putchar('\n');
}
