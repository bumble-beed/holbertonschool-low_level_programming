#include <stdio.h>

/**
* main - Alphabet soup with no q and e
*
* Return: 0
*/
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
		ch++;
	}
	putchar('\n');

return (0);
}
