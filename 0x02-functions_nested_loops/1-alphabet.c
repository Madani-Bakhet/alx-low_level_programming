#include <stdio.h>
#include "_putchar.c"

/**
  * print_alphabet - print all alphabet
  */
void print_alphabet(void)
{
	for (int i = 0; i < 26; i++)
	{
		char a = 'a' + i;
		_putchar(a);
	}
	printf("\n");
}
