#include <unistd.h>
#include "variadic_functions.h"

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
