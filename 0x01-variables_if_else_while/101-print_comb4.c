#include <stdio.h>
/**
 * main - The main entry point for the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{

		putchar(i / 4 + '0');

		putchar((i / 2) % 2 + '0');

		putchar(i % 2 + '0');

		putchar(',');

		putchar(' ');

	}
	return (0);
}
