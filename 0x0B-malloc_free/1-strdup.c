#include <stdlib.h>
#include "main.h"

/**
*_strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*@str: pointer to a string
*
*Return: a pointer to the array, or NULL if it fails.
*/

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + size++))
		;

	newstr = malloc(size * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; ++i)
			newstr[i] = str[i];
	}
	return (newstr);
}
