#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Project details
 * Return: 0
 */
int main(void)
{
	int ch;
	char c;

	for (ch = 'o'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
