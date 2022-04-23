#include"main.h"
/**
 * main - entry point
 *
 * return: always 0
 *
 */
void swap_int(int *a, int *b);
{
	int a=40,b=62;
	int *p,*q;
	p=&a;
	q=&b;
	swap_int(*p, *q);
	return (0);
}
