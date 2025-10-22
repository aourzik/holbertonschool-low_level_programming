#include <unistd.h>
#include "main.h"

/**
 * main - Point d'entrée du programme
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}