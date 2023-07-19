#include "main.h"

/**
 * main - prints the alphabet 10 times in lowercase
 *
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
