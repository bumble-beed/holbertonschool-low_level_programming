#include "main.h"

/**
* puts2 - print every other char
* @str: string
*/
void puts2(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\n')
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
        i++;
    }
    _putchar('\n');
}
