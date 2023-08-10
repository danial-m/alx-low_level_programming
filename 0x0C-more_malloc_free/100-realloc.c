#include <stdlib.h>
#include "main.h"

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: pointer to the memory previously allocated with malloc
*@old_size: size of ptr
*@new_size: size of new memory to be allocated
*
*Return: pointer to address of new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *_ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	temp = malloc(new_size);

	if (temp == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	while (i < old_size)
	{
		temp[i] = _ptr[i];
		++i;
	}
	free(ptr);
	return (temp);
}
