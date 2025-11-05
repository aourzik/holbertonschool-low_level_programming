#include "main.h"

/**
 * _sqr_var - helper function to find natural square root
 * @n: number to find the square root of
 * @x: current integer to test
 *
 * Return: the square root of n, or -1 if not a perfect square
 */
int _sqr_var(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return _sqr_var(n, x + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqr_var(n, 1));
}
