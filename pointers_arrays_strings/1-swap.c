#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
