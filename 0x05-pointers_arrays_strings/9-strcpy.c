#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
