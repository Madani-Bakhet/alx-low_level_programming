#include "main.h"

/**
  * *string_toupper - convert to uppercase
  * @temp: string
  *
  * Return: a pointer to a string
  */
char *string_toupper(char *temp)
{
	int i, len = strlen(temp);

	for (i = 0; i < len; i++)
	{
		temp[i] = toupper(temp[i]);
	}

	return (temp);
}
