#include"main.h"
/**
 * puts2 - prints a string with new line in stdout
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
