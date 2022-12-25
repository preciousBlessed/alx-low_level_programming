#include "main.h"

/**
 * _isalpha - Checks if a character(int) is alpha
 * @c: The character to test
 * Description: Returns bool after testing c
 * Return: 1-True, 0-False
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
