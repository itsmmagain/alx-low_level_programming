#include "main.h"
/**
 * _strlen(char *s) - function to find length of string
 * @s: string to check length of
 *
 */
int _strlen(char *s)

{
	int i;
	int length = 0;

	for (i=0; s[i] != '\0'; i++)
		length++;
	return length;
}
