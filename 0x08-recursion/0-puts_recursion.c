#include "main.h"

/**
*_puts_recursion - recursively prints a string,
*@s: string to be printed
*followed by a new line
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
