#include <stdlib.h>
#include "main.h"

/**
*array_range - creates an array of integers.
*@min: minimum number
*@max: maximum number
*
*Return: pointer to address of new memory
*/

int *array_range(int min, int max)
{
	int *newArray, *temp;

	if (min > max)
		return (NULL);

	newArray = malloc((max - min + 1) * sizeof(int));

	if (!newArray)
		return (NULL);

	temp = newArray;
	while (min <= max)
		*temp++ = min++;

return (newArray);
}
