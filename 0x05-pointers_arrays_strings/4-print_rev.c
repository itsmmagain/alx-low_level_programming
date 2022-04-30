#include<string.h>
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
	int j = 0;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		while (s[j] != '\0')
			{
			_putchar(s[j]);
			j++;
			}

	}
	_putchar('\n');
}
