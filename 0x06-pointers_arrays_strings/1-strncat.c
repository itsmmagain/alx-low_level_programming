#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: character string to concatenate to
 * @src: character string that is concatenated
 * @n: numbaer of characters to be concatenated
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int i;
	int j = strlen(dest);

	for (i = 0; s2[i] != '\0'; i + n)
	{
		s1[i + j] = s2[i];
	}
	s1[i + j] = '\0';
	return (dest);
}
