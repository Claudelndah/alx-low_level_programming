#include "main.h"

/**
 * _strcat - appends the souce string to the destination string
 * @dest: the variable of destination
 * @src: the variable of source
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
