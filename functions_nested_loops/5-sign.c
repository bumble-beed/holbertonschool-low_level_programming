gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign#include "main.h"
#include <stdio.h>

/**
* print_sign - prints sign of number
@n: number to check
*
* Return: 1 if greater than 0, 0 if equal to 0, -1 if less than 0
*/
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('1');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}