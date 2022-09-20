#include "main.h"
#include <stdio.h>

/**
 * puts2 : prints every other character 
 * @str : string 
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
			putchar(*(str + len));

	len++;
	}
	putchar(10);
}
