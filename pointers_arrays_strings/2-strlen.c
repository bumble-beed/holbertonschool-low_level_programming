#include "main.h"

/**
* _strlen - function for strlen
* @s: pointer len of str
* Return: len of str
*/
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
