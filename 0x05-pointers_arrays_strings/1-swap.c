i#include"main.h"
/**
 * main - entry point
 *
 * return: always 0
 *
 */
void swap_int(int *a, int *b)
{
	int *p=&a;
	int *q=&b;
	int a=98,b=42;
	printf("a=%d b=%d", a, b);
	swap_int(*p, *q);
	printf("a=%d b=%d", a, b);
	return (0);
}
