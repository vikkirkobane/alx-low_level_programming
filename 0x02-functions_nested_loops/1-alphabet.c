#include "main.h"
/**
 * print_alphabet - print the english alphabet from a-z.
 * Return; Nothing.
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
