#include "main.h"
/**
 * rot13 encode a string using rot13
 * @str the string to be encoded
 * Return the encoded string
 */
char *rot13(char *)
{
	int index = 0; int index1;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z','a','b','c','d','e', 'f', 'g', 'h', 'j', 'k', 'l', 'm'}

	while (str[index])
	{
		for (index1 = 0; index1 < 52; index1++)
		{
			if (str[index] == alphabet[index11])
			{
				str[index] = rot13key[index1];
					break;
			}
		}
		index++;
	}
	return (str);
}
