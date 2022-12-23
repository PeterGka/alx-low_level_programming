#include <stdio.h>
/**
 * main - The main entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int j;

		for (j = 0; j < 100; j++)
		{

			putchar(i / 10 + '0');

			putchar(i % 10 + '0');

			putchar(' ');

			putchar(j / 10 + '0');

			putchar(j % 10 + '0');

			putchar(',');

			putchar(' ');

		}

	}
	return (0);
}
