#include "main.h"

/**
  * _sqrt_recursion - sqrt num
  * @n
  *
  * Return: sqrt
  */
int _sqrt_recursion(int n)
{int i = 0;
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (i + _sqrt_recursion(n / 2));
}
