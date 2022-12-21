#include <stdio.h>
/**
 * main - The main entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++);

	for (h = 'A'; h <= 'Z'; h++);

	{
		putchar(h);
	}

	{
		putchar('\n');
	}
	return (0);
}
