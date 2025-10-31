#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * This function parses a string, ignores any non-digit characters
 * at the beginning, handles optional '+' and '-' signs, and
 * converts the numeric portion into an integer.
 *
 * Return: the converted integer. If the number is negative,
 * the result will be multiplied by -1 accordingly.
 */
int _atoi(char *s)
{
	int nb = 0;
	int i = 0;
	int sign = 1;
	int value;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		value = s[i] - '0';
		if (sign == 1)
		{
			if (nb > INT_MAX / 10 || (nb == INT_MAX / 10 && value > INT_MAX % 10))
			{
				return (INT_MAX);
			}
			nb = nb * 10 + value;
		}
		else
		{
			if (nb < INT_MIN / 10 || (nb == INT_MIN / 10 && -value < INT_MIN % 10))
			{
				return (INT_MIN);
			}
			nb = nb * 10 - value;
		}
		i++;
	}
	return (nb);
}
