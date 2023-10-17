#include "main.h"
/**
 * _printf - that produces output according to a format.
 * @format: is a character string.
 * @...: arguments
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	EB a[] = {
		{"%c", _char},
		{"%s", _string},
		{"%%", _percent},
		{"%d", _print},
		{"%i", _print},
	};

	va_list list_args;
	int j, i = 0, num = 0;

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);/*operation failed*/

	while (format[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (a[j].it[0] == format[i] && a[j].it[1] == format[i + 1])
			{
				num += a[j].fun(list_args);
				i += 2;
			}
		}
		_putchar(format[i]);
		i++;
		num++;
	}
	va_end(list_args);
	return (num);
}
