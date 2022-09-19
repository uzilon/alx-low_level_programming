#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int w = *b;
	int x = *a;
	*a = w;
	*b = x;
}
