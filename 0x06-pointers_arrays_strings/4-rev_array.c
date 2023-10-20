#include "main.h"

/**
 * reverse_array - Reverses array of integers.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, idx;

	for (idx = n - 1; idx >= n / 2; idx--)
	{
		tmp = a[n - 1 - idx];
		a[n - 1 - idx] = a[idx];
		a[idx] = tmp;
	}
}
