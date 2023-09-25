#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: i don't know
  * @b: constant byte
  * @n: size
  *
  * Return: Returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
