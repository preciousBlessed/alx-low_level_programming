#include "main.h"

/**
 * _strcpy - Prototype function to copy a string into anothere string
 * @dest: The string to paste into
 * @src: The string to copy from
 * Description: Will copy contents from src to dest
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len, index;

	len = index = 0;
	while (src[index++])
		len++;

	for (i = 0; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
