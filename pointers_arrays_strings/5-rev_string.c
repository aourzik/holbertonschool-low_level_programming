#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string, followed by a new line.
 * @s: The string to print.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len = 0;
	int letter;
	char c;

	while (s[len] != 0)
	{
		len++;
	}
	for (letter = 0; letter < len / 2; letter++)
	{
		c = s[letter];
		s[letter] = s[len - 1 - letter];
		s[len - 1 - letter] = c;
	}
}
