#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
  */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			printf("%.2d:%.2d\n", hours, minutes);
		}
	}
}
