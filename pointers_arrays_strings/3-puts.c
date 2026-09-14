#include "main.h"

/**
* _puts - print a string
* /n: new line
* @str: string to print
*/
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
