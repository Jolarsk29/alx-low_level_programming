#include "main.h"

/**
 * puts_half - function prints half of a string
 *
 *@str: char pointer to string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len = _strlen(str);

	int y;

	if (len % 2 == 0)

	{
		y = len / 2;
	}

	else if (len % 2 != 0)

	{
		y = (len + 1) / 2;
	}

	for (; *(str + y) != '\0'; y++)

	{
		_putchar(*(str + y));
	}

	_putchar('\n');
}
