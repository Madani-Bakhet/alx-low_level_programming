#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - print last digit
  * @n: input num
  *
  * Return: last digit
  */
int print_last_digit(int n)
{
	int r = n % 10;

	printf("%s", r);
	return (r);
}
