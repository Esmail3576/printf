#include "main.h"
/**
 * _strlen - lenght of string
 * @str: string
 * Return: lenght
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}


/**
 * _string - print string
 * @st: the string
 * Return: 1
*/

int _string(va_list st)
{
	char *str;
	int i, len;

		str = va_arg(st, char *);
	if (str == NULL)/*str is null pointer*/
	{
		str = "(null)";/*string empty*/
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
