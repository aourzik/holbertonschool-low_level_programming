#include "main.h"
#include <stdio.h>

/**
 * main - prints the of arguments of the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
