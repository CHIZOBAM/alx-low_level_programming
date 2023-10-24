#include "main.h"

/**
 * _strpbrk - Locate a string for bytes in a set.
 * @s: The string to be located.
 * @accept: The set of bytes to find.
 *
 * Return: Pointer that matches byte, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
