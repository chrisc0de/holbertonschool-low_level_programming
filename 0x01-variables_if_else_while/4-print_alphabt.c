#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 *
 */

int main(void)
{
char n;

for (n = 97; n <= 122; n++)
{
if (n != 101 && n != 113)
putchar(n);
}
putchar('\n');
return (0);
}
