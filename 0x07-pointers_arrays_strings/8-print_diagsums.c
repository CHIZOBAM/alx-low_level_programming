#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sums of diagonals in a square matrix of integers.
 * @a: Square matrix to be summed.
 * @size: Matrix size.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (idx = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
