#include "main.h"

/**
  * puts2 - prints every other character of a string, starting with the first character
  * @str: input
  */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
		i++;
	}
	printf("\n");
}