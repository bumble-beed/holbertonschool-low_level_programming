#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - print alphabet 10x
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	char lower_case;

	i = 0;

	while (i < 10)
	{
		lower_case = 'a';

		while (lower_case <= 'z')
		{
			_putchar(lower_case);
			lower_case++;
		}

		_putchar('\n');
	
		i++;
	}
}
