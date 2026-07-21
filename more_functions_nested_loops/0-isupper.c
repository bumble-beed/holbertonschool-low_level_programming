#include "main.h"
#include <ctype.h>

/**
* _isupper - checks for uppercase letter
* @c: character
*
* Return: 1, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
