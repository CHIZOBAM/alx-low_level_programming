#include "main.h"

/**
 * _strncpy - Copies at most 'n' bytes from the 'src' string into 'dest'.
 * @dest: Destination buffer for storing the string copy.
 * @src: Source string for copying.
 * @n: Maximum number of bytes to be copied from 'src'.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0, len = 0;

	while (src[idx++])
	{
		len++;
	}

	for (idx = 0; src[idx] && idx < n; idx++)
		dest[idx] = src[idx];

	for (idx = len; idx < n; idx++)
		dest[idx] = '\0';

	return (dest);
}
