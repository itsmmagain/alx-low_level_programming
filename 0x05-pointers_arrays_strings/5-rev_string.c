#include "main.h"
#include<string.h>
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: always 0
 */
void rev_string(char *s)

{
	int i;
	char c;
	int l;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
	c = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = c;
	}
}
