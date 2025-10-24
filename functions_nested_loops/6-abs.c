#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: the integer to compute
 *
 * Return: the absolute value of r
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
