#include <stdio.h>
#include "main.h"

/**
* main - alphabet in lower case
*
* Return: void
*/
void print_alphabet(void)
{
	char lower_case;

	lower_case = 'a';

	while (lower_case <= 'z')
	{
		_putchar(lower_case);
		lower_case++;
	}

	_putchar('\n');
}
