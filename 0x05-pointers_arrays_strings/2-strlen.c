#include "main.h"
#include <unistd.h>

/**
 * _strlen - Prototype function to find string length
 * @s: pointer to string whose kength should be found
 * Description: Takes s as parameter and finds the length by looping through
 * until  the character '\0'
 * Return: The length of string.
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

