#include <stdio.h>
/**
  *main - entry point
  *Description: prints the alphabet in lowercase
  *followed by a new line
  * Return: Always 0 (success)
  */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
