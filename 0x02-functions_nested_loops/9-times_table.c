#include "main.h"

/**
 * times_table - Key multiplication generator
 *
 * Description: Will generate timetable from 0 to 9
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod < 10 && (i * (j+1)) < 10)
			{
				_putchar(prod + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod < 10 && (i * (j + 1)) >= 10)
			{
				_putchar(prod + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 10)
			{
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
