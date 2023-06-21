#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number
 * Return: 1 for number greater than 0 and prints +
 * 0 for number is 0 and print 0
 * -1 if number is less than zero and print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
