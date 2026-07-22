#include "main.h"

/**
* print_line - draws a straight line
* @n: number of times '_' printed
*
* Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i =  0; n > i; i++)
		_putchar('_');
	}
	_putchar('\n');
}
