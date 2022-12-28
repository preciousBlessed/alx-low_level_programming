#include <stdio.h>

/**
 * main - Entry of Code
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = 2;
	unsigned long int i, fib;

	for (i = 1; i <= 48; i++)
	{
		fib = a + b;
		a = b;
		b = fib;

		if (fib >= 4000000)
			break;

		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%lu\n", sum);
	return (0);
}
