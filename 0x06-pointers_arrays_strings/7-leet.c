#include "main.h"

/**
  * *leet - encode string
  * *str: string
  *
  * Return: endoced string
  */
char *leet(char *str)
{
	int i, len = strlen(str);
	char test;

	for (i = 0; i < len; i++)
	{
		test = tolower(str[i]);
		if (test == 'a')
			str[i] = '4';
		else if (test == 'e')
			str[i] = '3';
		else if (test == 'o')
			str[i] = '0';
		else if (test == 't')
			str[i] = '7';
		else if (test == 'l')
			str[i] = '1';
	}
	return (str);
}
