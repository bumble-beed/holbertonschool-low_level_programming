#include <stdio.h>

/**
 * main - prints all letters in base 16 using putchar
 *
 * Return: (0)
 */
int main(void)
{
	char n = '0';
	char a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
