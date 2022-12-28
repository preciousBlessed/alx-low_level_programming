#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Generator function
 * @n: Starting point
 * Description: Prints numbers from starting point n to 98
 * Return: Nothing.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if  (n < 98)
	{
	while (n <= 98)
	{
	if (n != 98)
		printf("%d, ", n);
	else
		printf("%d\n", n);
	n++;
	}
	}
}

