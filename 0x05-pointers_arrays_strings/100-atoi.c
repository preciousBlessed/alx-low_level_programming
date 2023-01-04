#include "main.h"

/**
 * _atoi - Prototype function to parse a string and convert to integer
 * @s: The string to check
 * Description: The function chects the string for occurences of integers
 *		With the appropriate signs.
 * Return: Parsed string with appropriate sign (Success) or 0
 *	if no number is found (Failure).
 */
int _atoi(char *s)
{
	int len, neg, index, i;
	unsigned int finalNum = 0;

	neg = 1;
	index = len = 0;

	while (s[index++])
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			neg = neg * -1;

		else if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
		{
			finalNum = (finalNum * 10) + (s[i] - '0');
		}

		else if (finalNum > 0)
			break;
	}
	if (finalNum == 0 && len == 1)
		return (0);
	else
		return (finalNum * neg);
}
