#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: Pointer, the array to print
 * @n: The array length 
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
