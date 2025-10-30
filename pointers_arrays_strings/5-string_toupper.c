#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Change toutes les lettres minusculres d'une chaine en majuscules
 * @str: Pointeur vers la chaine de caractères à modifier.
 *
 * Return: Pointeur vers la chaine modifiée.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
