#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: seconde chaîne
 *
 * Return: un pointeur vers la nouvelle chaîne concaténée,
 *         ou NULL si l’allocation échoue
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	s = malloc((size1 + size2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\0';

	return (s);
}
