#include <stdio.h>
/**
 * main - The main entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);

				putchar(j);

				putchar(',');

				putchar(' ');
			}
		}
	}

	return 0;

}
