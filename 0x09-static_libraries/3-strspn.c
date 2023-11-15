#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The set of characters to be counted as prefix.
 *
 * Return: The number of bytes at the initial segment @s
 *         consisting only of characters in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
