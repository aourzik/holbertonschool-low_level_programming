#include "main.h"

/**
 * puts_half - prints the second half of a string,
 *             followed by a new line.
 * @str: the string to print
 *
 * Description: If the number of characters is odd,
 *              it prints the last (length + 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0;
	int begin, i;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	while (str[length] != '\0')
	{
		length++;
	}

	begin = length - (length / 2);

	for (i = begin; str[i] != '\0' && i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
