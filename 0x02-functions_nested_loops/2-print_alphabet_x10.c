#include "main.h"
/**
 * print_alphabet_x10.c - prints the alphabet 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)

{
	char n;

	int i = 1;

	while (i <= 10)

	{
		n = 'a';
		while (n <= 'z')

	{
		_putchar(n);
		n++;
	}

		_putchar('\n');
		i++;
	}
}
