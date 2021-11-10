#include "main.h"

/**
 * print_bin - converts a string to an integer.
 * @b: argument variadic passed from the printf function.
 * Return: lenght containing the number of characters.
 */
int print_bin(va_list b)
{
	int i, count = 0;
	unsigned int num;
	char *cadbin;

	num = va_arg(b, unsigned int);
	if (num == 0)
	{_putchar('0');
	count++;
	}
	else
	{	cadbin = binconvert(num, 2);
		for (i = 0; cadbin[i]; i++)
		{	_putchar(cadbin[i]);
			count++;
		}
	}
	return (count);
}
/**
 * binconvert - converts a integer to binary.
 * @val: argument variadic passed from the printf function.
 * @base: convert base.
 * Return: lenght containing the number of characters.
 */
char *binconvert(unsigned int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}
