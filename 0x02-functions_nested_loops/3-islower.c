#include <unistd.h>
#include "main.h"

/**
 * _islower - Checks if a character is lower case
 * @c: The character to test
 * Description: Takes c and returns bool
 * Return: 0 - False, 1- True.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
