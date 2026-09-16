#include "main.h"

/**
* print_rev - print in reverse
* @s: string to print
*/
void print_rev(char *s)
{
	int len;

	len = 62;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	
	_putchar('\n');
}
