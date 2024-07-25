#include "main.h"

/**
 * _printf - Display characters or variables like the std printf function in C.
 * @format: used to determine which operator we using
 * @%c: for character
 * @%s: for a string
 * @d: for a integer
 * Return: text or number that we want to print
*/
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{ i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == 'i' || format[i] == 'd')
				count += print_int(args);
			else if (format[i] == '%')
			{ _putchar('%');
				count++;
			}
			else
			{ _putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		} else
		{ _putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
