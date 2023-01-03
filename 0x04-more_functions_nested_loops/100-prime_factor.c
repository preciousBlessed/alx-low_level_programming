#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always (0) Success.
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int startsWith = 2;
	unsigned long int lastPrime;

	while (startsWith <= n)
	{
		while (n % startsWith == 0)
			n = n / startsWith;
		lastPrime = startsWith;
		if (n % startsWith != 0)
			startsWith++;
	}
	printf("%lu\n", lastPrime);
	return (0);
}
