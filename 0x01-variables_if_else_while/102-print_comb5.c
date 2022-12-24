#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, var;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				/*Controllers*/
				var = 0;
				if (k == 0)
					var = j + 1;
				if (i > 0)
					var = j + 1;
				for (l = var; l < 10; l++)
				{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(l + '0');
				if (i == 9 && j == 8 && l == 9 && k == 9)
					break;
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
