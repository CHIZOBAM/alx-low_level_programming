#include "main.h"

/**
 * _strchr - Occurence of character in a string.
 * @s: String to be searched.
 * @c: character to be  found.
 * Return: Pointer to the first occurrence or NULL.
 */
char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (s + idx);
		}
	}

	return ('\0');
}
