#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @r: the variadic argument brought from printf function
 * Return: amount of characters printed
 */

int print_rev(va_list r)
{
	int i = 0, lenrev = 0;
	char *str = va_arg(r, char *);

	while (str[i] != '\0')
		i++;
	lenrev = i;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (lenrev);
}
