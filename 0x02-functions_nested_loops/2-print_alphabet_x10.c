#define "main.h"
/**
 *print aplhabet 10 times
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
