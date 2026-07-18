#include <stdio.h>

/**
* main - Alphabet game
*
* Return: 0
*/
int main(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
		putchar(ch++);
	putchar('\n');

	return (0);
}
