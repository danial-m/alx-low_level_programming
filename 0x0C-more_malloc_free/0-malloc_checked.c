#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - allocates memory using malloc.
*@b: size of pointer to be allocated
*
*Return: pointer to the allocated memory, or 98 if it fails
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
