#include "main.h"

/**
  * _puts_recursion - put using recursion
  * @s: input
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
