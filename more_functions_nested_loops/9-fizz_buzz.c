#include <stdio.h>

/**
 * main - affiche les nombres de 1 à 100 avec FizzBuzz
 * Description:
 * Pour chaque nombre de 1 à 100 :
 * - si le nombre est divisible par 3, affiche "Fizz"
 * - si le nombre est divisible par 5, affiche "Buzz"
 * - si le nombre est divisible par 3 et 5, affiche "FizzBuzz"
 * Chaque sortie est séparée par un espace et le programme
 * se termine par un saut de ligne.
 * Return: 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
