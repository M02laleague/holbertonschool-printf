#include "main.h"
/**
 * print_string - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == NULL)
	s = "(nil)";

	while (*s)
	{
		_putchar(*s++);
		count++;
	}
	return (count);
}
