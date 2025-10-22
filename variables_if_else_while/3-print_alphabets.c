#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
    char C = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

    for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
