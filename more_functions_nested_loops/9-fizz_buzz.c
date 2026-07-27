#include <stdio.h>

/**
* main - fizzbizz
* 
* Return: 0 for success
int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
		if (a  % 3 == 3)
		{
			printf("Fizz ");
		}	
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
