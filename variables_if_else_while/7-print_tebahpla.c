#include <stdio.h>

/**
 * main - prints alphabet in reverse using only putchar
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
		putchar(ch--);
	putchar('\n');

	return (0);
}
