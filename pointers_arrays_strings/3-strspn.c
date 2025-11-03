#include "main.h"
#include <stdio.h>

/**
 *_strspn - calcule la longueur du préfixe d'une chaîne
 *contenant uniquement certains caractères
 *@s: pointeur vers la chaîne à analyser
 *@accept: caractères acceptés
 *
 *Description: Parcourt la chaîne s depuis le début et compte
 *le nombre de caractères consécutifs présents dans accept.
 *La recherche s'arrête dès qu'un caractère de s ne fait pas
 *partie de accept.
 *
 *Return: le nombre de caractères correspondants au début de s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int number = 0;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = 1;
			}
		}
		if (count == 0)
		{
			number++;
		}
	}
	return (number);
}
