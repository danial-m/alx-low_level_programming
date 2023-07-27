#include "main.h"

/**
*reverse_array - reverses the content of an array of integers.
*@a: pointer to array
*@n: the number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int begin, end, swap;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = a[begin];
		a[begin] = a[end];
		a[end] = swap;
		begin++;
		end--;
	}
}
