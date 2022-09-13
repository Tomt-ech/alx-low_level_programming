#include "main.h"

/**
 * main - the entry point
 *
 * Description: The program details
 * Return: 0
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else (n < '0')
	{
		_putchar('-');
		return (-1);
	}
}
