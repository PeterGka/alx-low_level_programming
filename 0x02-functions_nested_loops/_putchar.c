#ifindef "main.h"
#include <unistd.h>

/**
 *_putchar writes c to stdout
 *c is the character to print
 *
 *return 0 on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
