#include "main.h"

/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputed number of bytes.
 * the remainder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncpy'
 * @dest: an input string
 * @src: an input string
 * @n: max number of byte copied
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
