#include "main.h"
/**
 * _isalpha - checks whether a character is from the English alphabet.
 * @n: character to be checked.
 *
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);

}
