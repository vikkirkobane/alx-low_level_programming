#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -  copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Destination string
 * @src: String to be copied from
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
