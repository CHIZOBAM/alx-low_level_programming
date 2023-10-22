#include "main.h"

/**
 * _isdigit - This checks if a character is a digit (0-9).
 * @c: Characters to be checked.
 *
 * Return: 1 if the character is a digit, 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
