#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the result after multiply two arguments type int
 * @argc: count of the arguments
 * @argv: pointers array
 * Return: int
 */
int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;
	int res = 0;

	if (argc > 3 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 * n2;
		printf("%d\n", res);
	}

	return (0);
}
