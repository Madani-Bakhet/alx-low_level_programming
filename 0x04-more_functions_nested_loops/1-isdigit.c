#include "main.h"

/**
  * _isdigit - show if it digit or no
  * @c: testing char
  * Return: 1 if is digit or 0 if is otherwise
  */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}

