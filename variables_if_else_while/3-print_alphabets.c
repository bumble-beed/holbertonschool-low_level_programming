#include <stdio.h>

/**
 * main - prints uppercase and lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char lower_ch = 'a';
	char upper_ch = 'A';

	while (lower_ch <= 'z')
		putchar(lower_ch++);
	while (upper_ch <= 'Z')
		putchar(upper_ch++);
	putchar('\n');

	return (0);
}
