#include "main.h"
#include <stdio.h>

/**
* _islower - print lower_case
* @c: the character to check
*
* Return: 1 for lowercase. Else return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
