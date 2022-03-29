#include "main.h"
/**
 * _strchr - function that copies memory area.
 * @s: pointer to change
 * @c: char to find in the string
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
