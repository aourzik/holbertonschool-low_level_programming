#include "main.h"
#include <stdio.h>

/**
 * leet - Encode une chaîne en 1337.
 * @str: Pointeur vers la chaîne à modifier.
 *
 * Return: Pointeur vers la chaîne encodée.
 */
char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
