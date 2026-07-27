#include <stdio.h>

/**
* main - print 1 to 100, Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz for multiples of both
*
* Return: 0 for success
*/
int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
		if (a  % 15 == 0)
		{
			printf("Fizzbuzz");
		}	
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	printf("\n");
	return (0);
}
