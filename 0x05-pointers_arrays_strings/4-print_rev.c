#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s: Pointer, the string to print
 *
 * Return: none.
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
