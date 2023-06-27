#include "main.h"

/**
 * puts2 - function should print only one charcter out
 * @str: input
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *c = str;
	int j;

	while (*y != '\0')
	{
		c++;
		i++;
	}
	t = i - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
