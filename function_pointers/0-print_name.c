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
	return (write(1, &c, 1));
}
/**
 * my_print - affiche le nom caractère par caractère avec putchar
 * @name: nom à afficher
 */
void print(char *name)
{
	int i = 0;

	if (name == NULL)
	{
		return;
	}

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
