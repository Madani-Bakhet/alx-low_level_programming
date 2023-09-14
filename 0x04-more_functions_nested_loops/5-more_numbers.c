#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - print all alphabet 10 times
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j  = 0; j <= 14; j++)
			if (j > 9)
			{
				_putchar('1');
			}
			else
				_putchar(j + '0');
		_putchar('\n');
	}
}
