#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdput).
 * @c: The character to be written.
 *
 * Return: On success, returns the number of chracters writtten.
 * On error, returns -1 and sets errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
