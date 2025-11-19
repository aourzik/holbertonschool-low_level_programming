#include "function_pointers.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_name - applique la fonction f au nom
 * @name: nom à afficher
 * @f: fonction qui affiche le nom
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: caractère à afficher
 *
 * Retourne 1 en cas de succès, sinon -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print - fonction d'affichage d'une chaîne de
 * caractère avec _putchar
 * @str: chaîne de caractère à afficher
 *
 * Description: Affiche chaque caractère de la chaîne
 * suivi d'un retour à la ligne.
 */
void print(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
