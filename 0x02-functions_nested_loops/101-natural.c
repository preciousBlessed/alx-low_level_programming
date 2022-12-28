#include "main.h"
#include <stdio.h>

/**
 * natural_numbers -  Entry Point
 * @n: the integer to compute according to
 * Description: Function evaluates sum of numbers that
 * are divisible by 3 or 5 below n
 * Return: Nothing.
 */

void natural_numbers(int n)
{
	int sum = 0;
	int i = 1;

	while (i < n)
	{
	if (i % 3 == 0 || i % 5 == 0)
		sum += i;
	i++;
	}
	printf("%d\n", sum);
}
