#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to change
 * @src: the source
 * @n: the size of the byte to change
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
