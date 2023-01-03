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
	unsigned int numb = n;

	if (numb == 0)
		_putchar(numb + '0');
	else
	{
	if (n < 0)
	{
		_putchar('-');
		numb = -1 * numb;
	}
	if (numb / 10)
		print_number(numb / 10);
	_putchar((numb % 10) + '0');
	}
}
