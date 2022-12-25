#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Secondary function
 * Description: This function displays lowercase alphabets
 * Return: Nothing (Success on print).
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
