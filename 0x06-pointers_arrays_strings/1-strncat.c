#include "main.h"

/**
 * _strncat - concatenate destination to source and will use n bytes from src
 * @dest: variable of destination string
 * @src: variablz of source string
 * @n: size of source
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
