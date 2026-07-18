#include <stdio.h>

/**
* main - Alphabet in upper and lower case
*
* Return: 0
*/
int main(void)
{
	char lower_ch;
	char upper_ch;

	lower_ch = 'a';
	while (lower_ch <= 'z')
		putchar(lower_ch++);
	upper_ch = 'A';
	while (upper_ch <= 'Z')
		putchar(upper_ch++);
	putchar('\n');

	return (0);
}
