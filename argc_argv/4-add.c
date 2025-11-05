#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as command-line arguments
 * @argc: number of arguments passed
 * @argv: array of strings containing the arguments
 *
 * Description:
 * If no number is passed, prints 0 followed by a new line.
 * If any argument contains non-digit characters, prints "Error" and returns 1.
 * Otherwise, sums all positive numbers and prints the result followed
 * by a new line.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
