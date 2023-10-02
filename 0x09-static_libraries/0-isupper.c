#include "main.h"

/**
  * _isupper - show if it letter is uppercaase or no
  * @c: testing char
  * Return: 1 if is letter is uppercase or 0 if is otherwise
  */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}

