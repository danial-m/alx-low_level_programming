#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes.
*@s: pointer to a string
*@accept: searching string
*Return: new string
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
