#include "main.h"

/**
  * _strlen_recursion - count length
  * @s: input
  *
  * Return: length
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	else
		return (i = 1 + _strlen_recursion(s + 1));
}
