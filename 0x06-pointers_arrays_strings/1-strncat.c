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
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i + n;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i + n;
	}

	dest[i] = '\0';
	return (dest);
}
