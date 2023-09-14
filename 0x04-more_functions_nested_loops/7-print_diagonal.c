#include "main.h"

/**
  * print_diagonal - print diagonal
  * @n: input of dia
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('$');
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('$');
				_putchar('\n');
		}
	}
}
