#include <stdio.h>
/**
  *main - prints the alphabet in lowercase.
  *followed by a new line,
  *except q and e
  * Return: Always 0 (success)
  */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
if (alpha == 'e' || alpha == 'q')
alpha++;
}
putchar('\n');
return (0);
}
