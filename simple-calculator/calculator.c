#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* print_menu - menu for calculator
*
*/
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("\n");
}
int validate_choice(int choice)
{
	if (choice == 0)
	{
		printf("Byeeeee\n");
		return (-1);
	}
	else if (choice < 0 && choice > 4)
	{
		printf("This is a invalid choice\n");
		return (-1);
	}
	return (1);
}

/**
* main - arithmic calulation value of 2 operends
*
* Return: calculated value
*/
int main(void)
{
	int choice;
	float num1, num2, result;
	char op;

	print_menu();
	printf("Enter your Choice: \n");
	scanf("%d", &choice);
	if (validate_choice(choice) == -1)
	{
		return (0);
	}
	printf("Enter 2 numbers separated by a , \n");
	scanf("%f, %f", &num1, &num2);
	if (choice == 1)
	{
		op = '+';
		result = num1 + num2;
	}
	if (choice == 2)
	{
		op = '-';
		result = num1 - num2;
	}
	if (choice == 3)
	{
		op = '*';
		result = num1 * num2;
	}
	if (choice == 4)
	{
		op = '/';
		result = num1 / num2;
	}
	printf("%f %c %f = %f\n", num1, op, num2, result);

	return (0);
}
