#include "main.h"

/**
 *_strstr - localise une sous-chaîne dans une chaîne
 *@haystack: chaîne principale à analyser
 *@needle: sous-chaîne à rechercher
 *
 *Description: Parcourt la chaîne haystack et retourne un pointeur vers
 *le début de la première occurrence de needle. Si la sous-chaîne n'est
 *pas trouvée, la fonction renvoie NULL.
 *
 *Return: pointeur vers le début de needle dans haystack, ou NULL si absente
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (0);
}
