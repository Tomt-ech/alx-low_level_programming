#include <stdio.h>

/**
 * main - The entry point 
 *
 * Description: The program details
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'e' && letter != 'q')
		putchar(letter);
		}

			putchar('\n');
			return (0);
}
