#include "main.h"
/**
 * _char - prints characters
 * @ch: argument
 * Return: 1
*/
int _char(va_list ch)
{
	char c;

	c = va_arg(ch, int);
	_putchar(c);
	/*putchar to print (1) character*/
	return (1);
}
