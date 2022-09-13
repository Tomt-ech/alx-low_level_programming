#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 * @n: The character to be checked.
 * Return: 0
 */

int _abs(int n)
{

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else 
		return (n * -1);
}
