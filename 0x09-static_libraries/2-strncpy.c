#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Concatenates two strings.
 * @dest : The string to be checked.
 * @src : Tehe string to be checked.
 * @n : number
 * Return: A pointer to the resulting string dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
