#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char x[] = "_putchar\n";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
