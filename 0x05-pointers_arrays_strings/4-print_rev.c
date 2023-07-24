#include "main.h"

/**
 * print_rev -  prinnts a string in reverse, followed by a new line
 * @s: pointer to the character to be printed in reverse
 *
 */

void print_rev(char *s)
{
	if (*s == '\0')
		return;

	print_rev(s + 1);
	_putchar(*s);
}
