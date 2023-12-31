#include <stdio.h>
#include <stdlib.h>

/**
  * main - main
  * @argc: count
  * @argv: array
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(*++argv), n2 = atoi(*++argv);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
