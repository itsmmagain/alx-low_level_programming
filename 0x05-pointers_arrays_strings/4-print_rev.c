#include"main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to be reversed
 *
 */
void print_rev(char *s)

{
	int i;
	int n;

	n = _strlen(s);
	for (i = n - 1; i >= 0; i--)
		_puts(s);
}
