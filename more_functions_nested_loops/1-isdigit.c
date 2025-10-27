#include "main.h"
#include <stdio.h>

/**
*_isdigit - vérifie si un caractère correspond à un chiffre (0 à 9)
*@c: caractère à tester
*Description:
*Cette fonction teste si la valeur passée en argument correspond
*au code ASCII d'un chiffre compris entre '0' et '9'.
*Return: 1 si c est un chiffre, 0 sinon
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
