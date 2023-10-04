#include "main.h"

/**
  * _strdup - copy string to new location
  * @str: string
  *
  * Return: pointer to new location
  */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	else
		return (strdup(str));
}
