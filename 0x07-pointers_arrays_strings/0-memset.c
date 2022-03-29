#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer value
 * @b: char that contain the value to change
 * @n: size to change
 * Return: pointer with value update
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	{
		s[n] = b;
	}
	return (s);
}
