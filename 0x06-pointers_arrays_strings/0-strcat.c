#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	long int start;
	long int j = 0;
	long int added_space = strlen(src) + strlen(dest);

	for (start = (strlen(dest)); start < added_space; start++)
	{
		dest[start] = src[j];
		j++;
	}
	return (dest);
}
