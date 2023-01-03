#include "main.h"

/**
 * _isdigit - Digit checker
 * @c: Character to check
 * Description: Checks of the character is a base 10 degit
 * Return: (1) IF TRUE, (0) OTHERWISE.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
