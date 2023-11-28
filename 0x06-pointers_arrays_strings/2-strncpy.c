#include "main.h"

/**
 * _strncpy - copes a string
 * @dest: destination
 * @src: src
 * @n: size
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
