#include "main.h"
#include <stdio.h>

/**
* print_numbers - prints number 0 to 9
* @n: number to check
*
* Return: print 0 to 9
*/
void print_numbers(void)
{
	int n;

	n = '0';
	if (n >= '0' && n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
