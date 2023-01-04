#include "main.h"
#include <unistd.h>

/**
 * swap_int - A function that swaps two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 * Description: Will exchange the values held in a and b
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
