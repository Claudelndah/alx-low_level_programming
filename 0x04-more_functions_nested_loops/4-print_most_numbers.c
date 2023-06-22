#include "main.h"

/**
 * print_most_numbers - print 0-9 without 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		if (i != '2' || i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
