#include"main.h"
/**
 * main - entry point
 *
 * return: always 0
 *
 */
void swap_int(int *a, int *b) //function to swap value of two integers
{
	int i;
	i = *a; 
	*a = *b; //value of a swapped to b
	*b = i; //value of b swapped to a 
}
