#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: dest
  * @src: source
  * @n: num of bytes
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
