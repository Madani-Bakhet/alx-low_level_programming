#include "main.h"

/**
  * print_line - draw line
  * @n: lenght of line
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
