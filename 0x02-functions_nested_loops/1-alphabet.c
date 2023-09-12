#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - print all alphabet
  */
void print_alphabet(void)
{
	char c;

	for (c  = 'a'; c <= 'z'; c++)
		_putchar(c);
	printf("\n");
}
