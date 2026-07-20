#include "main.h"

/**
* _isalpha - checks for alphrabetic character
* @c: is the character to check
*
* Return: 1 if alpha, else return 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
