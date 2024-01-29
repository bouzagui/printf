#include "main.h"
/**
 * print_string - function to be printed a string.
 * @str: the string to print.
 * Return: the string.
*/
int print_string(char *str)
{
	unsigned int i;
	int count = 0;

	if (str == NULL)
	{
		return (_putchar_str("(null)"));
	}
	i = 0;
	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
/**
 * _putchar_str - Convert a string.
 * @s: the string to be converted
 * Return: the number of characters.
*/
int _putchar_str(char *s)
{
	unsigned int i;
	int count = 0;
	unsigned int len = strlen(s);

	if (s == NULL)
	{
		exit(-1);
	}

	for (i = 0; i < len; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
