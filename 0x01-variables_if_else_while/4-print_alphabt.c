#include <stdio.h>
/**
 * main - The main entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char xy;

	for (xy = 'a'; xy <= 'z'; xy++)
	{
		if (xy != 'q' && xy != 'e')
			putchar(xy);
	}

	putchar('\n');
	return (0);
}
