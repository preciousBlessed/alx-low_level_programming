#include <stdio.h>

int first_n_fibonacci(int n);
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int n, fib;

	printf("%lu, %lu, ", a, b);
	for (n = 1; n <= 48; n++)
	{
		if (n != 48)
		{
			fib = a + b;
			a = b;
			b = fib;
			printf("%lu, ", fib);
		}
		else if (n == 48)
		{
			fib = a + b;
			printf("%lu\n", fib);
		}
	}
	return (0);
}
