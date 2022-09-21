#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
			index++;
	}

	return (str);
}
