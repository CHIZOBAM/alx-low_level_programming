#include "main.h"

/**
 * _strcat - Concatenates @src to the end of @dest.
 * @dest: string  Destination.
 * @src: Source string to be appended.
 * Return: Pointer to the concatenated @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
