#include <stdio.h>

/**
 * main prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		putchar(ch++);
	putchar('\n');

	return 0;
}
