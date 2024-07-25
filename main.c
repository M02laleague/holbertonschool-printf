#include "main.h"

/**
 * _printf - Display characters or variables like the standard printf function in language C.
 * 
 * Return:
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
                char c = va_arg(args, int);
                _putchar(c);
            }
			else if (format[i] == 's')
			{
                char *s = va_arg(args, char *);
                while (*s)
                {
                    _putchar(*s++);
                }
            }
			else if (format[i] == '%')
			{
                _putchar('%');
            }
			else if (format[i] == 'i' || 'd')
			{

            }
        }
		else 
		{
            _putchar(format[i]);
        }
    }

    va_end(args);
	return(0);
}
