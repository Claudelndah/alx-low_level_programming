#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
