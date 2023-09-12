#include <stdio.h>
#include "main.h"

/**
  * print_sign - to know sign of num
  * @n: input num
  *
  * Return: 1 if greater than 0, -1 if less,0 otherwise 
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
