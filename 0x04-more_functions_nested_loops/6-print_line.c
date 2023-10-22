#include "main.h"

/**
 * print_line - Prints an horizontal line madeup of underscore characters.
 * @n: The total number of underscore characters to be printed.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
