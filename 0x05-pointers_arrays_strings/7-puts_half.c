#include "main.h"

/**
 * puts_half - puts half of a string
 * @str: string
 * REturn:void
 */

void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len /2;
	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		lens++
	}
	_putchar('\n');
}

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: returns lenght;
 */

int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = o; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
