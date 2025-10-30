#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule la première lettre de chaque mot d'une chaîne.
 * @str: Pointeur vers la chaîne de caractères à modifier.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char tab[] = " \t\n,;/!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	while (str[i] != '\0')
	{
		for (j = 0; tab[j] != '\0'; j++)
		{
			if (str[i] == tab[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (0);
}
