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

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d bytes(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(lli));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));

	return (0);
}