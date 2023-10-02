#include <stdio.h>
#include <stdlib.h>

/**
  * main - main
  * @argc: count
  * @argv: array
  *
  *Return: always 0
  */
int main(int argc, char **argv)
{
	int sum = 0, remin;

	if (argc == 2)
	{
		remin = atoi(*++argv);
		if (remin < 0)
		{
			printf("0");
			return (1);
		}
		sum += remin / 25;
		remin = remin % 25;
		sum += remin / 10;
		remin = remin % 10;
		sum += remin / 5;
		remin = remin % 5;
		sum += remin / 2;
		remin = remin % 2;
		sum += remin / 1;
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
