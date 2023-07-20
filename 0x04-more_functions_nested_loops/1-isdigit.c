#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	return (1);
	else
	return (0);
}
