#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	 char *original_dest = dest;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add the terminating null byte to the destination */

	return (original_dest);
}
