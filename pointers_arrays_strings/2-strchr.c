#include "main.h"
#include <stdio.h>

/**
 *_strchr - renvoie un pointeur vers le premier caractère trouvé
 *dans une chaîne
 *@s: pointeur vers la chaîne de caractères
 *@c: caractère à chercher
 *
 *Description: Parcourt la chaîne pointée par s à la recherche du
 *caractère c. Si le caractère est trouvé, renvoie un pointeur
 *vers sa position dans la chaîne. Sinon, renvoie un pointeur
 *vers le caractère nul terminal.
 *
 *Return: pointeur vers le caractère trouvé ou '\0' si non trouvé
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
