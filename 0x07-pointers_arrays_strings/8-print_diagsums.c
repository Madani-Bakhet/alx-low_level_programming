#include "main.h"

/**
  * print_diagsums - print diagrams
  * @a: array
  * @size: size
  */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		sum1 += a[i];
		i += size;
	}
	for (i = size - 1; i < size * size - (size - 1); i--)
	{
		sum2 += a[i];
		i += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
