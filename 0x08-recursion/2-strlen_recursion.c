#include "main.h"

/**
  * _strlen - count length
  * @s: input
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	else
		return (i = 1 + _strlen_recursion(s + 1));
}
