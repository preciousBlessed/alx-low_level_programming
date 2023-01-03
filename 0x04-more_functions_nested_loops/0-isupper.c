#include "main.h"

/**
 * _isupper - Character check function
 * @c: A character to check
 * Description: This function checks if a character is lower case
 * Return: (1) if c is uppercase, (0) otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
