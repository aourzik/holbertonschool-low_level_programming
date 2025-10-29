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
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
