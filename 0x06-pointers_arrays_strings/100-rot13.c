#include "main.h"

/**
  * rot13 - encode to rot13
  * @str: string
  *
  * Return: encoded string
  */
char *rot13(char *str)
{
	char *p = str;
	char base;

	for (; *p != '\0'; ++p)
	{
		base = (*p >= 'a' && *p <= 'z') ? 'a' : ((*p >= 'A' && *p <= 'Z') ? 'A' : 0);
		if (base)
			*p = base + ((*p - base + 13) % 26);
	}
	return (str);
}
