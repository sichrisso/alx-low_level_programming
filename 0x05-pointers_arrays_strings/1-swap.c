#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: Pointer with the address value
 *
 * @b: Pointer with the address value
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
