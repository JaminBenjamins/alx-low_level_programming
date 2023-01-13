#include <stdlib.h> 
#include "main.h"
/**
 * argstostr - function that concatenates all arguments 
 * @ac - number of arguments
 * @av - array of arguments
 *
 * Return : pointer to a new string NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int j, k; 
	int i = 0, sum = 0, temp = 0; 
	char *new_str = NULL; 

	i = ac;
	if (ac == 0 || av == 0)

		return (NULL);

	while(ac--)
		sum += (len(av[ac]) + 1);
	new_str = (char *) malloc(sum + 1);

	if (new_str != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
			{
				new_str[j + temp] = av[k][j];
			}			
			new_str[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}

/**
 * len - returns length of string
 * @str -string counted
 * Return: returns length of string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

