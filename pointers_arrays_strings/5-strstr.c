#include "main.h"
#include <stddef.h>

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
	unsigned int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
