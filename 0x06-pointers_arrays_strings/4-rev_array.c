#include "main.h"

/**
  * reversr_array - reverse array
  * @a: the array
  * @n: length
  */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++, j--;
	}
}
