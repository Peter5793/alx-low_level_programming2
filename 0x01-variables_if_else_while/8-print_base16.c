#include <stdio.h>

/**
 * main - Entry point for Hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char str;
for (str = '0'; str <= '9'; str++)
{
putchar(str);
}
for (str = 'a'; str <= 'f'; str++)
{
putchar(str);
}
putchar('\n');
return (0);
}
