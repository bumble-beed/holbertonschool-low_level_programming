#include "main.h"

/**
 * main - prints alphabet 10x  followed by new line, using void print_alphabet_x10(void) and _putchar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
