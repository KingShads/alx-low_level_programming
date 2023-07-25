#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	if (s == NULL)
		return;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from both ends of the string until the middle */

	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
