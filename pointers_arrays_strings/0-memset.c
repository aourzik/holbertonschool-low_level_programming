#include "main.h"
#include <stdio.h>

/**
 *_memset - remplit une zone mémoire avec un octet constant
 *@s: pointeur vers la zone mémoire à remplir
 *@b: valeur de l’octet à répéter
 *@n: nombre d’octets à remplir
 *
 *Description: Parcourt les n premiers octets de la mémoire pointée
 *par s et les remplit avec la valeur b.
 *
 *Return: retourne le pointeur s (début de la zone mémoire)
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        s[i] = b;
        i++;
    }
    return (s);
}
