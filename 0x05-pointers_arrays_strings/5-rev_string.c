#include "main.h"
#include <unistd.h>

/**
 * rev_string - Prototype function to reverse a string
 * @s: The string to reverse
 * Description: Function reverses the order of the string s
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int count, c, k, temp;

	count = c = 0;
	while (*(s + c) != '\0')
	{
		count++;
		c++;
	}
	for (k = 0; k < (count / 2); k++)
	{
		temp = s[k];
		s[k] = s[count - k - 1];
		s[count - k - 1] = temp;
	}
}
