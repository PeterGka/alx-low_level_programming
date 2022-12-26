#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * This function prints the alphabet (a-z) 10 times, with each letter
 * on a separate line.
 */

void print_alphabet_x10(void)
{
	int a;
	char la;

	for (a = 0; a <= 9; a++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar (la);
		_putchar ('\n');
	}
}
