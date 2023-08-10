#include <stdlib.h>
#include "main.h"

/**
*_calloc - allocates memory for an array.
*@nmemb: number of elements
*@size: size of memory
*
*Return: pointer to adress of memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newstr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newstr = malloc(nmemb * size);

	if (newstr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			newstr[i] = 0;
		return (newstr);
	}
	else
		return (NULL);
}
