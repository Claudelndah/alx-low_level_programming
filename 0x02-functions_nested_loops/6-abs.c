#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: The number that find a absolute value
 * Return: 0 Always (Success)
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
