#include "main.h"

/**
  * rev_string - print string in reverse
  * @s: input
  */

void rev_string(char *s)
{
	int len = strlen(s), i, j;
	char temp[500];

	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		temp[j] = s[i];
		j++;
	}
	strcpy(s, temp);
}
