#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	 int start_index;

	if (str == NULL)
		return;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}

