#include "main.h"

/**
 * _strncat - Concatenates n bytes from src to dest.
 * @dest: Destination string.
 * @src:  Source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int currentIndex = 0, destinationLength = 0;

	while (dest[currentIndex++])
		destinationLength++;

	for (currentIndex = 0; src[currentIndex] && currentIndex < n; currentIndex++)
		dest[destinationLength++] = src[currentIndex];

	return (dest);
}
