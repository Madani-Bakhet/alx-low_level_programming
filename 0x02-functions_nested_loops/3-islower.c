#include <stdio.h>
#include <ctype.h>

/**
  * _islower - show if letter is lower or no
  * @c: testing char
  * Return: 1 if is lower or 0 if is otherwise
  */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}

