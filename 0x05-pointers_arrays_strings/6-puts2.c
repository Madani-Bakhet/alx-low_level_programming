#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: input
  */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++, i++)
		printf("%c", str[i]);
	printf("\n");
}
