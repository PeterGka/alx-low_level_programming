#nclude <stdio.h>
/**
 *main-print data type
 *Description
 *
 *Return 0
 */
struct my_struct
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
return (0);
}
