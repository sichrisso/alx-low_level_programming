#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the number of elements
 * @argc: count of the arguments
 * @argv: pointers array
 * Return: int
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
