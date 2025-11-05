#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as command-line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Description:
 * The program checks if exactly two arguments are provided.
 * If not, it prints "Error" followed by a new line and returns 1.
 * Otherwise, it converts the arguments to integers, multiplies them,
 * and prints the result followed by a new line.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
