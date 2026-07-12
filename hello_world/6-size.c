#include <stdio.h>

/**
* main - prints size of various type
*
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int lli;

	printf("Size of char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of int: %d bytes(s)\n", (int)sizeof(i));
	printf("Size of float: %d bytes(s)\n", (int)sizeof(f));
	printf("Size of long int: %d byte(s)\n", (int)sizeof(li));
	printf("Size of long long int: %d byte(s)\n", (int)sizeof(lli));

	return (0);
}