#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare deux chaines de caractères
 * @s1: première chaine à comparer
 * @s2: seconde chaine à comparer
 *
 * Return: un entier inférieur, égal ou supérieur à 0
 * si s1 est respectivement inférieure, égale ou supérieure à s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
