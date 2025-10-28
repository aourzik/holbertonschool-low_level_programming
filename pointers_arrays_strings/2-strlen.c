#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Description: This function counts the number of characters
 * in a string until it reaches the null terminator '\0'.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int countdown = 0;

	while (s[countdown] != '\0')
	{
		countdown++;
	}
	return (countdown);
}
