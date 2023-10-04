#include "main.h"

/**
  * create_array - create array
  * @size: size
  * @c: char
  *
  * Return: pointer
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
