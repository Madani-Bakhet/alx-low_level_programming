#include "main.h"

/**
  * str_concat - concatate two string
  * @s1: first
  * @s2: second
  *
  * Return: pointer to new string
  */
char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2);
	char *str = malloc(len);

	strcpy(str, s1);
	strcat(str, s2);
	return str;
}
