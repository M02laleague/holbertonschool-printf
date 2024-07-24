#include "../main.h"
/**
 * print_string - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_string(va_list args)
{
    char *s = va_arg(args, char *);
        while (*s)
        {
            _putchar(*s++);
        }
    return(0);
}
