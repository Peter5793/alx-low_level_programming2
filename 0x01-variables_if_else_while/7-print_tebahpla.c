#include <stdio.h>
/**
 * main - Entry point print lower case in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str;
for (str = 'z'; str >= 'a'; str--)
{
putchar(str);
}
putchar('\n');
return (0);
}
