#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always (0).
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0 && n != 100)
			printf("Buzz ");
		else
		{
			if (n != 100)
				printf("%d ", n);
			else if (n == 100)
				printf("Buzz\n");
		}
		n++;
	}
	return (0);
}
