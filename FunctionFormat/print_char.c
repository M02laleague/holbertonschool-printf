#include "main.h"
/**
 * print_char - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_char(va_list args)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
