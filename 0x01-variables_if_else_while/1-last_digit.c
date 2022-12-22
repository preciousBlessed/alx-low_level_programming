#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lDee;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDee = n % 10;
	if (lDee > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDee);
	else if (lDee == 0)
		printf("Last digit of %d is %d and is 0\n", n, lDee);
	else if (lDee < 6 && lDee != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDee);
	return (0);
}
