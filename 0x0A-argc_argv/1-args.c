#include <stdio.h>

/**
  * main - main
  * @argc: length
  * @argv: array
  *
  * Return: always 1
  */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
