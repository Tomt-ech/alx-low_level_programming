#include <stdio.h>

/**
 * main - The entry point
 *
 * Discription: project details
 * Return: 0
 */
int main(void)

{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
			{
				putchar(alpha);
				alpha--;
			}
			putchar('\n');

			return (0);
}
