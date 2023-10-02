#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
  * main - main
  * @argc: coount
  * @argv: array
  *
  * Returns: 0
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	bool error = false;

	if (argc == 1)
	{
		printf("0\n");
	return 0;
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				error = true;
				break;
			}
		}
		if (error)
		{
			printf("Error\n");
			return 1;
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return 0;
}
