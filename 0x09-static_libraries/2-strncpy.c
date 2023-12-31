#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
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

