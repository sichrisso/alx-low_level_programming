#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer
 * @needle:pointer
 *
 * Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int aux = 0;
	int aux2 = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		aux2 = 0;
		if (haystack[i] == needle[0])
		{
			aux = i;
			while (haystack[aux] == needle[aux2])
			{
				aux++;
				aux2++;
			}
		}
		if (needle[aux2] == '\0')
		{
			return (haystack + i);
		}
	}

	return (0);
}
