#include <stdio.h>
#include "main.h"

/** 
 * print_array - Prints an inputted number of elements of an array
 * 		of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		els
			pritnf("%d", a[inc]);
	}
	putchar(10);
}
