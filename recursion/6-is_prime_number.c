#include "main.h"

/**
 * prime - checks recursively if a number is prime
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime(int n, int x)
{
	if (x * x > n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (prime(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
