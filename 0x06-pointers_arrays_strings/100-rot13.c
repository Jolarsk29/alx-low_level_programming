#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string to encode
 *
 * Return: address of s
 */

char *rot13(char *str)
{
	int index1, index2;

	char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot13key[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[++index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == alphabet[index2])
			{
				str[index1] = rot13key[index2];
				break;
			}
		}
	}
	return (str);
}
