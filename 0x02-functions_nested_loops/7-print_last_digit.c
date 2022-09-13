#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @ln: the integer in question
 * Return: 0
 */

int print_last_digit(int ln)
{
	int ln = ln % 10;

	if (ln < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
