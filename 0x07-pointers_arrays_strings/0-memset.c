#include "main.h"

/**
 * _memset - Point of entry to Fill a memory block.
 * @s: Pointer destination memory area to be filled.
 * @b: Memory filler in byte.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;
	char *mem = s;
	char var = b;

	for (idx = 0; idx < n; idx++)
	{
		mem[idx] = var;
	}

	return (mem);
}
