#include "main.h"

/**
 * leet a function that encodes a string 
 * @str the string that will be encoded
 * Return : returns encoded string
 */
char *leet(char *)
{
	int i = 0; i2;
	char leet[8] = {'A','E','O','T','L'}

	while (str[++i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i2] == leet[i2] || str[i] - 32 == leet[i2])
			str [i] = i2 + '0';	
		}
	i++; 
	return (str);
	}
}	
