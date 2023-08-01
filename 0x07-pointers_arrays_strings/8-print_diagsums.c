#include "main.h"

/**
*print_diagsums - prints the sum of the two diagonals of
*a square matrix of integers.
*@a: source matrix
*@size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, k, l = 0;

	k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[l];
			if (j == k)
				sum2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sum1, sum2);
}
