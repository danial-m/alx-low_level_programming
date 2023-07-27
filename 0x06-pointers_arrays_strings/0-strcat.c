#include "main.h"

/**
*_strcat - concatenates two strings.
*@src: pointer to source string
*@dest: pointer to destination string
*Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (dest[lengthD] != '\0')
	{
		lengthD++;
	}
	while (src[lengthS] != '\0')
	{
		dest[lengthD] = src[lengthS];
		lengthD++;
		lengthS++;
	}
	dest[lengthD] = '\0';
	return (dest);
}
