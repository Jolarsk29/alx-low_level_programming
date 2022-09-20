#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printeed
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
