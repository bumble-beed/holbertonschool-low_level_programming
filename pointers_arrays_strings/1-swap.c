#include "main.h"

/**
* swap_int - function to swap 2 int
* @a: value of int a
* @b: value of int b
*/
void swap_int(int *a, int *b)
{
	int streams;

	streams = *a;
	*a = *b;
	*b = streams;
}
