#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	return (1);

	else
	{
		return (0);
	}
}
