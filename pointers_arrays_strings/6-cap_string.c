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
	char tab[] = " \t\n,.;/!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			for (j = 0; tab[j] != '\0'; j++)
			{
				if (str[i - 1] == tab[j] && (str[i] >= 'a' && str[i] <= 'z'))
				{
					str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
