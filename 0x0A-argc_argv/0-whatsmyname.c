#include <stdio.h>

/**
  * main - main
  * @argc: length
  * @argv: array
  *
  * Return: always 0
  */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv++);
	return (0);
}
