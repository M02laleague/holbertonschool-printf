#include "main.h"
#include <limits.h>
/**
 * print_int - prints integer
 * @args: argument to print
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n == INT_MIN)
	{
		count += _printf("-2147483648");
		return (count);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}

	count += print_uint_recursive(num);
	return (count);
}
/**
 * print_int_recursive - prints int recursion
 * @n: n to print
 *
 * Return: number of characters printed
 */
int print_int_recursive(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_int_recursive(n / 10);
	_putchar((n % 10) + '0');
	return (count + 1);
}
