#include "main.h"
#include <stdio.h>

/**
* times_table - print 9 times table
*
* Return: no return
*/
void times_table(void)
{
	int n;
	int i;
	int product;

	n = 0;
	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			product = n * i;

			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (i != 0)
					_putchar(' ');
				_putchar(product % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}
}
