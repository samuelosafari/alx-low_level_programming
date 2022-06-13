#include "main.h"

/**
 * _puts - prints a string, and followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
