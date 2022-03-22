#include "main.h"

/**
 * swap_int - a function that swaps int values
 * @a: int pointer type
 * @b: int pointer type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
