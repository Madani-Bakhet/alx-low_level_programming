#include "main.h"

/**
  * cap_string - cap first char
  * @temp: string
  *
  * Return: the string after cap
  */
char *cap_string(char *temp)
{
	int i, len = strlen(temp);

	for (i = 0; i < len; i++)
	{
		if (temp[i-1] == ' ' || temp[i-1] == '\t' || temp[i-1] == '\n')
			temp[i] = toupper(temp[i]);
	}
	return (temp);
}
