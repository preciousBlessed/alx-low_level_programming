#include "main.h"

/**
 * print_last_digit - Evautation Point
 * @n: value to extract last digit from
 * Description: It takes in an integer and returns the last digit
 * Return: Last difit of n.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
