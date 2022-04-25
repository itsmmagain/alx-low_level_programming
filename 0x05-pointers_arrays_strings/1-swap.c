#include"main.h"
/**
 * swap_int - function to swap integer value
 * @a: is first integer
 * @b: is second integer
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
