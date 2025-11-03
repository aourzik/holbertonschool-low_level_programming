#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - recherche le premier caractère commun à deux chaînes
 *@s: chaîne principale à analyser
 *@accept: ensemble de caractères à rechercher
 *
 *Description: Parcourt la chaîne s et renvoie un pointeur vers le premier
 *caractère de s qui correspond à l’un des caractères présents dans accept.
 *Si aucun caractère n’est trouvé, la fonction renvoie NULL.
 *
 *Return: pointeur vers le caractère correspondant dans s, ou NULL si absent
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
