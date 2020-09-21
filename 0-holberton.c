#include <stdio.h>
#include <unistd.h>


/**
 * main - print hello world
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is ser appropriately.
 */

int main(void)
{
char c[10] = "Holberton";
int i = 0;

for (i = 0; i <= 9; i++)
{
putchar(c[i]);
}

putchar('\n');


return (0);

}
