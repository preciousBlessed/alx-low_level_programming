#include "main.h"
int _abs(int);
/**
 * _abs - Prototype absolute value
 * @n: the integer to evaluate absolute value
 * Description: It takes an integer and returns it's absolute value
 * Return: Always gt 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
	return (n * -1);
	}
	else
	{
	return (0);
	}
}
