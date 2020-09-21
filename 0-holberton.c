#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point printt Holberton
 *
 *_putchar -writes character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is ser appropriately
 */

int main(void)
{
char c[10] = "Holberton";
int i;
for (i = 0; i < c[10]; i++)
putchar(c[i]);
putchar('\n');


return (0);

}
