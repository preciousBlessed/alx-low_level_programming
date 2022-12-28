#include "main.h"

/**
 * print_times_table - Key multiplication generator
 * @n: the nth value to compute upto
 * Description: Will generate timetable from 0 to n
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n < 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod < 10 && (i * (j + 1)) < 10)
			{
				_putchar(prod + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod < 10 && (i * (j + 1)) >= 10)
			{
				_putchar(prod + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod >= 10 && prod < 100)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod < 100 && (i * (j + 1)) >= 100)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod % 100) / 10) + '0');
				_putchar(((prod % 100) % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
