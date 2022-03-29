#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a matrix
 * @a: bidimensional array
 * @size:int
 *
 * Return: char.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += *(a + (size * i + i));
		y += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", x, y);
}
