#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
print("Size of a char: %ld byte(s)\n", sizeof(char));
print("Size of an int: %ld byte(s)\n", sizeof(int));
print("Size of a long int: %ld byte(s)\n", sizeof(long int));
print("Size of a long long int: %ld byte\n", sizeof(long long int));
print("Size of a float: %ld byte(s)", sizeof(float));
return (0);
}
