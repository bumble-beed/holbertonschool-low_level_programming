#include <stdio.h>

/**
* main - print all numbers of base 16
*
* Return: 0
*/
int main(void)
{
	char n;
	char a;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
