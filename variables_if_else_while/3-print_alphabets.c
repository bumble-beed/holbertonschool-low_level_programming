#include <stdio.h>

/**
 * main - prints uppercase and lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a' && 'A';

	while (ch <= 'z')
		putchar(ch++);
	while (ch <= 'Z')
		putchar(ch++);
	putchar('\n');

	return (0);
}
