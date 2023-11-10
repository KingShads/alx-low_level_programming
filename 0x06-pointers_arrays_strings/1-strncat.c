#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: number of characters of src to be appended
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	long int start;
	long int j = 0;
	int added_space;

	if (n < (int)strlen(dest))
	{
		added_space = strlen(dest) + n;
	}
	else
		added_space = (strlen(dest)) + (strlen(src));

	for (start = (strlen(dest)); start < added_space; start++)
	{
		dest[start] = src[j];
		j++;
	}

	return (dest);
}
