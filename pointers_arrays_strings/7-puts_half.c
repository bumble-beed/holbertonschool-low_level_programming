#include "main.h"
#include <stdio.h>

/**
* puts_half - print 2nd half of string
* @str: string
*/
void puts_half(char *str)
{
	int len;
	int start;
	int i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len + 1)/ 2;
	
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
