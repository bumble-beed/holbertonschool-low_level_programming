#include <stdio.h>
#include "main.h"

/**
* print_last_digit - print last digit of number
* @n:  input number
*
* Return: last digit
*/
int print_last_digit(int n)
{

	int last_num;

	last_num = n % 10;
	if (last_num < 0)
		last_num = -last_num;

	_putchar(last_num + '0');

	return (last_num);
}
