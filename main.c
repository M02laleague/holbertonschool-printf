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
            i++; // Passer au spécificateur de conversion "%c ou %s ou %%"
            if (format[i] == 'c') // Print le character
			{
                char c = va_arg(args, int);
                _putchar(c);
            }
			else if (format[i] == 's') // Print le string
			{
                char *s = va_arg(args, char *);
                while (*s)
                {
                    _putchar(*s++);
                }
            }
			else if (format[i] == '%') // % pour print %
			{
                _putchar('%');
            }
			else if (format[i] == 'i') // Ici pour un integer
			{

            }
			else if (format[i] == 'd') // Ici pour un integer %d
			{

            }
			else if (format[i] == 'f') // Ici pour un float convertis en double pour va_arg
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
