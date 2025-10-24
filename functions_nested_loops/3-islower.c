#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
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
