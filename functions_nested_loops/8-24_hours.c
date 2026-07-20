#include "main.h"
#include <stdio.h>

/**
* jack_bauer - every minute
*
* Return: no returns
*/
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');   /* tens of hour  */
			_putchar((h % 10) + '0');   /* ones of hour  */
			_putchar(':');
			_putchar((m / 10) + '0');   /* tens of minute */
			_putchar((m % 10) + '0');   /* ones of minute */
			_putchar('\n');
			m++;
		}
		h++;
	}
}
