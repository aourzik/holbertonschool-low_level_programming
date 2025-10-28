#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character,
 *         followed by a new line.
 * @str: the string to print
 *
 * Description: This function loops through the string,
 *              printing only characters at even indices
 *              (0, 2, 4, ...). After printing all relevant
 *              characters, it prints a newline.
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		return;
	}

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
