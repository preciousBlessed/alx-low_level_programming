#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Key multiplication generator
 * @n: the nth value to compute upto
 * Description: Will generate timetable from 0 to n
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) < 10 && ((i * j) + i) < 10)
			{
			if (j != n)
				printf("%d,   ", (i * j));
			else if (j == n)
				printf("%d\n", (i * j));
			}
			if ((i * j) < 10 && ((i * j) + i) >= 10)
			{
				if (j != n)
					printf("%d,  ", (i * j));
				else if (j == n)
					printf("%d\n", (i * j));
			}
			if ((i * j) >= 10 && (i * j + i) < 100)
			{
			if (j != n)
				printf("%d,  ", (i * j));
			else if (j == n)
				printf("%d\n", (i * j));
			}
			else if ((i * j) >= 10 && (i * j + i) >= 100)
			{
				if (j != n)
					printf("%d, ", (i * j));
				else if (j == n)
					printf("%d\n", (i * j));
			}
		}
	}
	}
}
