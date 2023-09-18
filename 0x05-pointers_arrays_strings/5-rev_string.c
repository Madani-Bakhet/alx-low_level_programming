#include "main.h"

/**
  * rev_string - print string in reverse
  * @s: input
  */

void rev_string(char *s)
{
	int len = strlen(s), i;
	char temp[500];

	for (i = len - 1; i >= 0; i--)
		temp[len - (i + 1)] = s[i];
	strcpy(s, temp);
}
