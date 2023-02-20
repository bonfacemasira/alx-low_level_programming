#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
char a;
int n;

for (n = 0; n < 10; n++)
{
	putchar(a);
	a++;
}
a = '1';
for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
	a++;
}
putchar ('\n');
return (0);
}
