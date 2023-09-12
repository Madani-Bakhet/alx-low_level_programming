#include <stdio.h>
#include <ctype.h>

/**
  * _isalpha - show if it is letter or no
  * @c: testing char
  * Return: 1 if is letter or 0 if is otherwise
  */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}

