#include "main.h"
/**
 * print_number - handle print any int number
 * @num: an integer
 * Return: 1
*/
void print_number(int num)
{
	if (num < 0)
	{
	_putchar('-');
	num = -num;
	}

	if (num <= 9)
	{
	_putchar(num + '0');
	}
	else
	{
	print_number(num / 10);
	_putchar((num % 10) + '0');
	}
}
/**
 * _print - call print number
 * @n: an integer
 * Return: 1
*/
int _print(va_list n)
{
	int k;

	k = va_arg(n, int);
	print_number(k);
	return (1);
}
