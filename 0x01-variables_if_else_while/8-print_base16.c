#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Project details
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'o'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
