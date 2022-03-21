#include "main.h"

/**
 * _atoi - main function.
 * @s: Pointer to the string.
 *
 * Description: This function convert a string to an integer.
 *
 * Return: The integer value of string.
 */

int _atoi(char *s)
{
	unsigned int i = 0, j = 0, k = 0;
	unsigned int a = 1, b = 1, n;

	while (s[i])
	{
		if (j > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}

		if (s[i] == '-')
		{
			a *= -1;
		}

		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			if (j > 0)
			{
				b *= 10;
			}
			j++;
		}
		i++;
	}

	for (n = i - j; n < i; n++)
	{
		k = k + ((s[n] - 48) * b);
		b /= 10;
	}

	return (k * a);
}
