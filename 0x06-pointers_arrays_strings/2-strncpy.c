#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: an input string
 * @src: an input string
 * @n: max number of byte copied
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i]
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
