#include "main.h"

int is_prime(int n, int i);

/**
*is_prime_number - check if the number is prime.
*@n: integer number
*Return: 1 if number is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
*is_prime - check if the number is prime
*@n: integer number
*@i: integer, iterate from 1 to n
*Return: 1 if number is prime, 0 otherwise
*/

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
