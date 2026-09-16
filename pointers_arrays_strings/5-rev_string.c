#include "main.h"

/**
* rev_string - reverse string
* @s: string
*/
void rev_string(char *s)
{
	int start;
	int end;
	char temp;

	start = 0;

	while (s[start] != 0)
	{
		temp = start;
		start++;
	}

	for (start = 0, end = temp; end > start; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}

}