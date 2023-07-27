#include "main.h"

/**
*_strncat - concatenates two strings.
*it will use at most n bytes from src; and
*src does not need to be null-terminated if it contains n or more bytes
*@dest: pointer to destination string
*@src: pointer to source string
*@n: number of bytes to be concatenated
*Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (dest[lengthD] != '\0')
	{
		lengthD++;
	}
	while (src[lengthS] != '\0' && lengthS < n)
	{
		dest[lengthD] = src[lengthS];
		lengthD++;
		lengthS++;
	}
	dest[lengthD] = '\0';
	return (dest);
}
