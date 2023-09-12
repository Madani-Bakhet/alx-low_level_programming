#include <stdio.h>
#include <ctype.h>

/** _islower - show letter is lowercase or no
  *
  * Return: 1 if is lower or 0 if is otherwise
  */
int _islower(char c)
{
	if (islower(c) != 0)
		return 1;
	else
		return 0;
}

