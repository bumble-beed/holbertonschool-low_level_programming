#include "main.h"

/**
* puts2 - print every other char
* @s: string
*/
void puts2(char *str)
{
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
        i++;
    }
    _putchar('\n');
}