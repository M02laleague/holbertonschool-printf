#include "main.h"

/**
 * _printf - Display characters or variables like the std printf function in C.
 * @format: used to determine which operator we using
 * @%c: for character
 * @%s: for a string
 * @i: or @d: for a integer
 * Return: text or number that we want to print
*/
int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
			int print_char(va_list args);
			}
			else if (format[i] == 's')
			{
			int print_string(va_list args);
			}
			else if (format[i] == 'i' || 'd')
			{
			int print_int(va_list args);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}

	va_end(args);
	return (0);
}
