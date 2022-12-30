#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long n, fib;
	unsigned long ahalf1, ahalf2, bhalf1, bhalf2, fibh1, fibh2;

	printf("%lu, %lu, ", a, b);
	for (n = 1; n <= 90; n++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu, ", fib);
	}
	/**
	 * insufficient memory from n=93 so we split and work with halves:
	 */
	ahalf1 = a / 10000000000;
	ahalf2 = a % 10000000000;
	bhalf1 = b / 10000000000;
	bhalf2 = b % 10000000000;
	for (n = 91; n <= 96; n++)
	{
		fibh1 = ahalf1 + bhalf1;
		fibh2 = ahalf2 + bhalf2;

		if (fibh2 > 9999999999)
		{
			fibh1 += 1;
			fibh2 %= 10000000000;
		}
		if (n != 96)
			printf("%lu%lu, ", fibh1, fibh2);
		else if (n == 96)
			printf("%lu%lu\n", fibh1, fibh2);
		ahalf1 = bhalf1;
		ahalf2 = bhalf2;
		bhalf1 = fibh1;
		bhalf2 = fibh2;
	}
	return (0);
}
