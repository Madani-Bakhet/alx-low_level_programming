#include "main.h"

/**
  * swap_int - swap two value
  * @a: first
  * @b: second
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
