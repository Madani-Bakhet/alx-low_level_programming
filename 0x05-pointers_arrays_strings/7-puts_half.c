#include "main.h"

/**
  * puts_half - print half of string
  * @str: input
  */
void puts_half(char *str)
{
	int i, len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}
	for (; i < len; i++)
	{
		putchar(str[i]);
	}
	printf("\n");
}
