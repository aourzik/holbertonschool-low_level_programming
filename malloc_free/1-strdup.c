#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplique une chaîne de caractères
 * @str: la chaîne à dupliquer
 *
 * Return: un pointeur vers la nouvelle chaîne dupliquée,
 *         ou NULL si str est NULL ou si l’allocation échoue
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		;

	/* on alloue la mémoire avec + 1 pour le caractère de fin */
	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}

	/*termine la nouvelle chaine avec \0 */
	s[size] = '\0';

	return (s);
}
