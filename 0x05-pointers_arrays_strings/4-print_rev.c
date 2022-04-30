#include<string.h>
#include"main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 *
 */
void print_rev(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
		m++;
	m--;
	for (; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
