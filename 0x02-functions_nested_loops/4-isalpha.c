#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character.
 * @c: the character to be checked.
 *
 * Return: 1 if the character is alphabetic, 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
