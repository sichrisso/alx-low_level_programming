#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int flag;
	int count;

	count = 0;
	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
	return (count);
}
