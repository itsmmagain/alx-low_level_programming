#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copy n strings from src to dest
 * @dest: destination of copy
 * @src: where to copy from
 * @n: number of characters to copy
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
