#include "main.h"

/**
 * _strstr - Finds first occurence of a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring destination.
 *
 * Return: Pointer to the found  substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
