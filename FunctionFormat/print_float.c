#include "../main.h"
#include <math.h>
/**
 * print_float - prints integer
 * @args: argument to print
 * Return: float number (6 digits after the dot)
 */
int print_float(va_list args)
{
    double num = va_arg(args, double);
    int count = 0;
    double integer_part, fractional_part;
    int temp;
    int i;

    if (num < 0)
    {
        num = -num;
        _putchar('-');
        count++;
    }

    fractional_part = modf(num, &integer_part);

    /* Imprimer la partie entière */
    temp = (int)integer_part;
    if (temp == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        char int_buffer[20];
        int int_len = 0;
        while (temp > 0)
        {
            int_buffer[int_len++] = '0' + (temp % 10);
            temp /= 10;
        }
        for (i = int_len - 1; i >= 0; i--)
        {
            _putchar(int_buffer[i]);
            count++;
        }
    }

    _putchar('.');
    count++;

    /*Imprimer la partie fractionnaire (6 décimales)*/
    for (i = 0; i < 6; i++)
    {
        fractional_part *= 10;
        temp = (int)fractional_part;
        _putchar('0' + temp);
        count++;
        fractional_part -= temp;
    }

    return count;
}