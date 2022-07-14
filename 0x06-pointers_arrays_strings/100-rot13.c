#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L',
				 'M', 'N', 'O', 'P', 'Q', 'R',
				  'S', 'T', 'U', 'V', 'W', 'X',
				  'Y', 'Z', 'a', 'b', 'c', 'd',
				  'e', 'f', 'g', 'h', 'i', 'j',
				   'k', 'l', 'm', 'n', 'o', 'p',
				   'q', 'r', 's', 't', 'u', 'v',
				    'w', 'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S',
				'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', 'A', 'B', 'C', 'D', 'E',
				'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'n', 'o', 'p', 'q',
				'r', 's', 't', 'u', 'v', 'w',
				 'x', 'y', 'z', 'a', 'b', 'c',
				  'd', 'e', 'f', 'g', 'h', 'i',
				  'j', 'k', 'l', 'm'};
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13key[j];
				break;

			}
			j++;

	}
	i++;
	}
	return (str);
}
