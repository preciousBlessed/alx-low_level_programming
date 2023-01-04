#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints in order n elemets from an array
 * @a: The array of integers in question
 * @n: The number of elements to print from the array
 * Description: The function takes two parameters, an array -> a
 * and an integer -> n to output n elements of the array.
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", *(a + i));
		else if (i == (n - 1))
			printf("%d\n", *(a + i));
	}
}
