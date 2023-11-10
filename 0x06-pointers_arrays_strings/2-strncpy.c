#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (int)strlen(src))
		{
			dest[i] = src[i];
		}
		if (i >= (int)strlen(src))
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
