#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest : destination
  * @src: source
  * @n: num of bytes
  *
  * Return: concatenation of dest & src
  */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
