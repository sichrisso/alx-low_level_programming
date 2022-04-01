#include "main.h"
#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: count of the arguments
 * @argv: pointers array
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
