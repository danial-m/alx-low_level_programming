#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: number of bytes
*
*Return: NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		newstr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		newstr[len++] = s2[i];

	newstr[len] = '\0';

	return (newstr);
}
