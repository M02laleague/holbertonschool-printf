#include "../main.h"
/**
 * print_char - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char s = va_arg(args, int);

	_putchar(s);
	return (1);
}
