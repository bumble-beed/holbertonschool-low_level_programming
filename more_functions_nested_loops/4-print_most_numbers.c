#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - print numbers
*
* Return: all numbers except 2 and 4
*/
void print_most_numbers(void)
{
	int c;

	c = 48;
	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		_putchar(c);
	}

	_putchar('\n');
}
