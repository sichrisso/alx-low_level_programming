#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: Pointer, the string to print.
 *
 * Return: none.
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (a < b + 1 / 2)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;

		b--;
		a++;
	}
}
