#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase,
*followed by a new line
*Return: Always 0 (success)
*/
int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
